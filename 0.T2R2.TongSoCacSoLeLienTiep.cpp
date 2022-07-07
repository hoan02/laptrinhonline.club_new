#include<stdio.h>
main(){
 long i, x, y, s=0;
 scanf("%ld", &x);
 scanf("%ld", &y);
 if(x > y){
  for(i=y+1; i<x; i++){
   if(i%2 != 0)
   s += i;
  }
 }
 else{
  for(i=x+1; i<y; i++){
   if(i%2 != 0)
   s+=i;
  }
 }
 printf("%ld", s);
}