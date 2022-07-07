#include<stdio.h>
#include<math.h>
int main(){
  int N, K, X, Y;
  scanf("%d%d%d%d", &N, &K, &X, &Y);
  if(N>K){
   printf("%d" , (K * X)+((N - K)*Y)); 
  } else{
   printf("%d" ,N * X); 
  } 
  return 0; 
}