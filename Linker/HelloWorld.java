 class HelloWorld {
     private native void print();
     private native int add(int a,int b);
     public static void main(String[] args) {
         System.out.println(new HelloWorld().add(5,6));
     }
     static {
         System.loadLibrary("HelloWorld");
     }
 }