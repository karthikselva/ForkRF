 #include <jni.h>
 #include <stdio.h>
 #include "HelloWorld.h"
 
 
JNIEXPORT jint JNICALL 
 Java_HelloWorld_add(JNIEnv *env, jobject obj,int a , int b){

       return a+b;
 }