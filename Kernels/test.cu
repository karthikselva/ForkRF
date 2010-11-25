#include<cuda_runtime.h>
#include<stdio.h>
// Kernel definition
 __global__  void    MatAdd(float *A, float *B, float *C)
 { 
 int i = threadIdx.x; 
 int j = threadIdx.y; 
 *C= *A + *B;
 }
 int main() { 
 // Kernel invocation with one block of N * N * 1 threads
 int numBlocks = 1; 
 int i=0,j=0;
 float A=5,B=10,C;
 dim3 threadsPerBlock(10, 10);
 MatAdd<<<numBlocks, threadsPerBlock>>>(&A,&B,&C);
 printf("%f",C);
 return 1;
 }