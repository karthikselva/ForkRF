 #include <jni.h>
 #include <stdio.h>
 #include "HelloWorld.h"
 #include "test.h"
 
 JNIEXPORT void JNICALL Java_HelloWorld_callCuda (JNIEnv *env, jobject obj,int numBlocks,int b1,int b2){
  float A=5,B=10,C;
 dim3 threadsPerBlock(10, 10);
  MatAdd<<<numBlocks, threadsPerBlock>>>(A,B,C);
   printf("%f",C);
 }
 
