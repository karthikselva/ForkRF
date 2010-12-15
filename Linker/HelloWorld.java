 class HelloWorld {
     private native void callCuda(int numblocks , int b1, int b2);
     public static void main(String[] args) 
	{
         new HelloWorld().callCuda(1,10,10);
         System.out.println(" In java Called ");
     }
     static {
         System.loadLibrary("a");
     }
 }