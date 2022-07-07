#include<stdio.h>
#include<math.h>
main(){
 
 int n, t=1;
 scanf("%d", &n);
 for(int i=1;i<=n;i++){
  t*=i;
  
 }
 printf("%d", t);
}