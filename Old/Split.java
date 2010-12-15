import java.io.*;

public class Split{

public static void main(String args[]) throws Throwable
{
    long start_time=System.currentTimeMillis();
	
	String toSplit=args[0];
 	int lines=Integer.parseInt(args[1]);
 	FileInputStream fis=new FileInputStream(toSplit);
	FileInputStream label=new FileInputStream("Label.txt");;
	FileOutputStream out=null;
	int line_count=0;
	int ch;
	String name=null;
	int split_count=0;
	while((ch=fis.read())!=-1)
	{
		if((char)ch=='\n') line_count++;
		
		if(line_count==0||line_count==lines){
		
			if(out!=null){ 
				out.close();
				out=null;
				}
				
			name="kddcup"+split_count+".arff";
			out=new FileOutputStream("output/"+name);
			System.out.println(" Splitting file .. "+name);
			split_count++;
			int labeler;
			label.close();
			label=new FileInputStream("Label.txt");
			while((labeler=label.read())!=-1){
			out.write(labeler);
			}
		out.write((int)'\n');
			line_count=1;
			}
			
			if((char)ch!='.') out.write(ch);
		}
		long end_time=System.currentTimeMillis();
		
		System.out.println(" Total Time is :"+(end_time-start_time));
		
		}
		}
		
	
	