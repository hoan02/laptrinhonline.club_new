#include <stdio.h>
#include <math.h>
main(){
 float a, b, c;
 scanf("%f%f%f", &a, &b, &c);
 if(a+b==c || a+c==b || b+c==a){
  printf("Yes");  
 }else{
  printf("No");
 }
}