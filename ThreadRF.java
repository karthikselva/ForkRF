import java.io.*;
import java.net.*;

class Compute extends Thread{
 int i=0;
 String command=null;
Compute(int l,String com){
	i=l;
	command=com;
	}


	public void run() {
	try{
  Runtime r=Runtime.getRuntime();
String temp=null;

//System.out.println(" Value of I is :"+i);

Process p=r.exec(command);
//System.out.println(" Executing "+command+" .... ");
BufferedReader pin=new BufferedReader(new InputStreamReader(p.getInputStream()));
PrintWriter pw=new PrintWriter("rf/result"+i+".log");

while((temp=pin.readLine())!=null)
{
pw.println(temp);
}
pw.close();
}

catch(Exception e){
System.out.println(" Error ");
}
  }
  }



public class ThreadRF{
public static void main(String []args) throws Throwable
{

 long start_time=System.currentTimeMillis();
int start=Integer.parseInt(args[0]);
int end=Integer.parseInt(args[1]);
Compute c=null;
 for(int i=start;i<=end;i++){


 c=new Compute(i," java weka.classifiers.trees.RandomForest -t output/kddcup"+i+".arff -i ");
c.start();

}


long end_time=System.currentTimeMillis();
		
//System.out.println(" Total Time is :"+(end_time-start_time));
}
} 