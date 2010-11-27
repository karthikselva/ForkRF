import java.io.*;
import java.net.*;
public class SplitADA{
public static void main(String []args) throws Exception
{

 long start_time=System.currentTimeMillis();

Runtime r=Runtime.getRuntime();
String command,temp;
int start=Integer.parseInt(args[0]);
int end=Integer.parseInt(args[1]);

for(int i=start;i<=end;i++){

command="java  weka.classifiers.meta.AdaBoostM1 -t output/kddcup"+i+".arff -i  -P 100 -S 1 -I 10 -W weka.classifiers.trees.DecisionStump ";
Process p=r.exec(command);
System.out.println(" Executing "+command+" .... ");
BufferedReader pin=new BufferedReader(new InputStreamReader(p.getInputStream()));
PrintWriter pw=new PrintWriter("rf/result"+i+".log");

while((temp=pin.readLine())!=null)
{
pw.println(temp);
}
pw.close();
}
long end_time=System.currentTimeMillis();
		
System.out.println(" Total Time is :"+(end_time-start_time));
}

} 