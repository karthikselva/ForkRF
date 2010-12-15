 import weka.classifiers.trees.RandomForest;
 import weka.classifiers.Evaluation;
 import java.io.*;
 public class WekaSerialize {
 public static void main(String args[]) throws Throwable  {

 
 
 
 
  long start_time=System.currentTimeMillis();

Runtime r=Runtime.getRuntime();
String command,temp;
int start=Integer.parseInt(args[0]);
int end=Integer.parseInt(args[1]);

for(int i=start;i<=end;i++){



 String[] options = new String[2];
 options[0] = "-t";
 options[1] = "output/kddcup"+i+".arff";
 RandomForest rf=new RandomForest();
 System.out.println(" Forming tree for data Set ("+i+") ...");
Evaluation.evaluateModel(rf, options);






   ObjectOutput ObjOut = new ObjectOutputStream(new FileOutputStream(new File("rf/result"+i+".tree")));
 
     ObjOut.writeObject(rf);
  
     ObjOut.close();
 
     System.out.println("Serializing an Object Creation completed successfully.");

}

long end_time=System.currentTimeMillis();
		
System.out.println(" Total Time is :"+(end_time-start_time));
 }
 }