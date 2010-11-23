import java.io.*;
import java.net.*;
public class SplitRF{
public static void main(String []args) throws Exception
{
Runtime r=Runtime.getRuntime();
String command,temp;
int start=Integer.parseInt(args[0]);
int end=Integer.parseInt(args[1]);

for(int i=start;i<=end;i++){

command=" java weka.classifiers.trees.RandomForest -t output/kddcup"+i+".arff -i ";
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
}
} 