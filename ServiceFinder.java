	import java.util.*;
	import java.io.*;
public class ServiceFinder{

	// Author : karthik 
	 //Module : Find service 
	 //Refer: Service.txt
	 public static void main(String args[]) throws Throwable{
	 if(args.length==0) System.out.println(" Usage : java ServiceFinder <port_no> ");
	    HashMap hm=new HashMap();
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
		System.out.println(" Service is :"+hm.get(Integer.parseInt(args[0])));
			services.close();
	 }
}	 