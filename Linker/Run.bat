javac HelloWorld.java
javah -jni HelloWorld
"F:\Program Files\Microsoft Visual Studio 10.0\VC\vcvarsall.bat"

cl -If:\Java\jdk1.6.0_06\include -If:\Java\jdk1.6.0_06\include\win32 -MD -LD HelloWorld.c -FeHelloWorld.dll
java HelloWorld
