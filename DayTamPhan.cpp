#include<stdio.h>

int n, a[30], dem=0;

void Try(int k){
 if(k>n){
  for(int j=1; j<=n; j++)
   printf("%d ", a[j]);
  printf("\n");
  dem++;
  return;
 }
 for(int i=0; i<=2; i++){
  if(k==1 || ((i+a[k-1])%3!=0 && (i!=a[k-1]))){
   a[k]= i;
   Try(k+1);
  }
 }
}
main(){
 scanf("%d", &n);
 Try(1);
 printf("%d", dem);
}