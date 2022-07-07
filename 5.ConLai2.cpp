#include<stdio.h>
main(){
 int n,i;
 scanf("%d",&n);
 if(n<-2 || n>2){
  for(i=2;i<=10000;i+=n){
   if(i%n==2)
    printf("%d\n",i);
  }
 }
}