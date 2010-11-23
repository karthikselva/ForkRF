import java.io.*;

public class SplitString{

public static void main(String args[]) throws Throwable
{
    long start_time=System.currentTimeMillis();
	
	String toSplit=args[0];
 	int lines=Integer.parseInt(args[1]);
 	BufferedReader br=new BufferedReader(new FileReader(toSplit));
	BufferedReader label=new BufferedReader(new FileReader("Label.txt"));
	PrintWriter out=null;
	int line_count=0;
	String ch=null;
	String name=null;
	int split_count=0;
	while((ch=br.readLine())!=null)
	{
	    
		
		if(line_count==0||line_count==lines){
		
			if(out!=null){ 
				out.close();
				out=null;
				}
				
			name="kddcup"+split_count+".arff";
			out=new PrintWriter("output/"+name);
			System.out.println(" Splitting file .. "+name);
			split_count++;
			String labeler=null;
			label.close();
			label=new BufferedReader(new FileReader("Label.txt"));
			while((labeler=label.readLine())!=null){
			out.println(labeler);
			}
		out.println("\n");
			line_count=1;
			}
			ch=ch.substring(0,ch.length()-1);
			out.println(ch);
			 line_count++;
		}
		long end_time=System.currentTimeMillis();
		
		System.out.println(" Total Time is :"+(end_time-start_time));
		
		}
		}
		
	
	