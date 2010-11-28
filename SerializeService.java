import java.io.*;
import java.util.*;
  public class SerializeService{
 
  public static void main(String[] args) throws IOException{
  
  
  
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
		
			services.close();
			
			
			
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    String filename = "Service.hash";
 
   File f = new File(filename);
  
  try{
   
   ObjectOutput ObjOut = new ObjectOutputStream(new FileOutputStream(f));
 
     ObjOut.writeObject(hm);
  
     ObjOut.close();
 
     System.out.println("Serializing an Object Creation completed successfully.");
 
    }
    
catch(IOException e){
   
   System.out.println(e.getMessage());

      }
  
}

  } 