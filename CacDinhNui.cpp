#include<stdio.h>
int main(){
 int A[100],i,d=0,N;
 scanf("%d",&N);
 for(i=1;i<N+1;i++){
  scanf("%d",&A[i]);
 }
 if(N<3) printf("%d",d=0);
 else
 {
  for(int i=2;i<N;i++){
   if( (A[i]>A[i-1]) && (A[i]>A[i+1]))
    d++;
  }
   printf("%d",d);
 }
 return 0;
}