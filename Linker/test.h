#include<cuda_runtime.h>
// Kernel definition
 __global__  void    MatAdd(float A, float B, float C)
 { 
 int i = threadIdx.x; 
 int j = threadIdx.y; 
 C= A + B;
 }
 
 