import java.io.*;
import java.net.*;
public class Transmitter
{
public static void main(String []args) throws Exception
{
String s1=" ",s2=" ";

String ip=args[0];
String data=null;
int start=Integer.parseInt(args[1]);
int end=Integer.parseInt(args[2]);
int port=Integer.parseInt(args[3]);



Socket s=new Socket(ip,port);
BufferedReader br1=new BufferedReader(new InputStreamReader(s.getInputStream()));
PrintWriter pw=new PrintWriter(s.getOutputStream());
for(int i=start;i<=end;i++){
BufferedReader br=new BufferedReader(new FileReader("output/kddcup"+i+".arff"));
System.out.println(" Transimitting file "+"kddcup"+i+".arff"+" ..... ");
pw.println("Some body stop me !");
pw.flush();

while((data=br.readLine())!=null)
{

pw.println(data);
pw.flush();

}

}
pw.println("The End");
pw.flush();
s.close();
}
}