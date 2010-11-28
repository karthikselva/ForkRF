import java.io.*;
import java.util.ArrayList;
import jpcap.*;
import jpcap.packet.*;
import java.util.*;

public class TCPSniffer
{
   public static void main(String[] args) throws Exception
   {
      //CHOOSE DEVICE
      NetworkInterface[] devices = JpcapCaptor.getDeviceList();//if nothing prints, try running as root
    //  System.out.println("Choose a network device:");
      for(int i=0;i<devices.length;i++)
      {
         System.out.println(" Device Chosen is  " + devices[i].name);
      }

      NetworkInterface nic = devices[0];
      //OPEN DEVICE
      JpcapCaptor captor=JpcapCaptor.openDevice(nic, 100000, true , 10);
	 
	 
	 // Author : karthik 
	 //Module : Find service 
	 //Refer: Service.txt
	 
	  
	
	     HashMap hm=new HashMap();
		 /*
		BufferedReader services=new BufferedReader(new FileReader("services.txt"));
		String data=null,service=null;
		Integer port;
		while((data=services.readLine())!=null){
			StringTokenizer st=new StringTokenizer(data,"/		");
			
			service=st.nextToken();
			port=Integer.parseInt(st.nextToken());
			st.nextToken();
			hm.put(port,service);
			
			}
		
			services.close();	 
			*/
	
	// Serialised Hashmap
	 ObjectInputStream inputStream = new ObjectInputStream(new FileInputStream("service.hash"));
	 hm=(HashMap)inputStream.readObject();
	  Parser.serviceHash=hm;
	  
	  
      //pass in callback method
      PacketStorage ps = new PacketStorage();
      new Thread(new Parser(ps)).start();
      captor.loopPacket(-1, ps); //blocks forever or until error occurs
   }

   private static class Parser implements Runnable
   {  
      static HashMap serviceHash=null;
	String protocol=null;
	  static String kddServ="vmnet,smtp,ntp_u,shell,kshell,aol,imap4,urh_i,netbios_ssn,tftp_u,mtp,uucp,nnsp,echo,tim_i,ssh,iso_tsap,time,netbios_ns,systat,hostnames,login,efs,supdup,http_8001,courier,ctf,finger,nntp,ftp_data,red_i,ldap,http,ftp,pm_dump,exec,klogin,auth,netbios_dgm,other,link,X11,discard,private,remote_job,IRC,daytime,pop_3,pop_2,gopher,sunrpc,name,rje,domain,uucp_path,http_2784,Z39_50,domain_u,csnet_ns,whois,eco_i,bgp,sql_net,printer,telnet,ecr_i,urp_i,netstat,http_443,harvest";
      PacketStorage ps;
      public Parser(PacketStorage ps)
      {
         this.ps=ps;
      }

      public void run()
      {
         Packet p;
         TCPPacket tcp;
         while(true)
         {
            p=ps.getPacket();
            if(p!=null && p instanceof TCPPacket )
            {
		if(p.toString().contains("TCP")) protocol="tcp";	
		if(p.toString().contains("UDP")) protocol="udp";
		if(p.toString().contains("ICMP")) protocol="icmp";   
		 
               tcp =(TCPPacket)p;
              if(serviceHash.get(tcp.dst_port)!=null&&kddServ.contains(serviceHash.get(tcp.dst_port).toString()))  System.out.println("Src: " + tcp.src_ip + " Port: " + tcp.src_port + " Dst: " + tcp.dst_ip + "Port: " + tcp.dst_port+"  service is :"+serviceHash.get(tcp.dst_port)+" Protocol is :"+protocol);

		 
            }
            try
            {
               Thread.sleep(25);
            }
            catch(InterruptedException e){}
         }
      }
   }

   private static class PacketStorage implements PacketReceiver
   {
      private ArrayList<Packet> packets = new ArrayList<Packet>();

      public void receivePacket(Packet p)
      {
         packets.add(p);
      }
      public Packet getPacket()
      {
         return packets.size()>0?packets.remove(0):null;
      }
   }
}
