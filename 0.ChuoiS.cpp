#include<stdio.h>
main(){
 int i;
 float s = 0;
 for(i=1; i<=100; i++){
  s += 1.0/i;
 }
 printf("%.6f", s);
}