#include<stdio.h>
#include<math.h>
main(){
 long n,m;
 int d=0;
 scanf("%ld%ld",&n,&m);
 if(n<0)
  printf("ERROR");
 else{
  int a=m;
  while(a>n){
   if(a%2==0){
    d++;
    a/=2;
   }
  else{
  a++;
  d++; 
  }
 }
 printf("%d",d+n-a);
 }
}