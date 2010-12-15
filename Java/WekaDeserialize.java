 import weka.classifiers.trees.RandomForest;
 import weka.classifiers.Evaluation;
 import java.io.*;
 public class WekaDeserialize {
 public static void main(String args[]) throws Throwable  {

 
 
 
 
  long start_time=System.currentTimeMillis();

String command,temp;
int start=Integer.parseInt(args[0]);
int end=Integer.parseInt(args[1]);
 String[] options = new String[2];
 options[0] = "-i";
 options[1] = "";
for(int i=start;i<=end;i++){


  ObjectInputStream inputStream = new ObjectInputStream(new FileInputStream("rf/result"+i+".tree"));
 RandomForest	 rf=(RandomForest)inputStream.readObject();
     System.out.println("Deserializing an Object Creation completed successfully.");
 System.out.println(" Forming tree for data Set ("+i+") ...");
System.out.println(rf.measureOutOfBagError());

 


}

long end_time=System.currentTimeMillis();
		
System.out.println(" Total Time is :"+(end_time-start_time));
 }
 }