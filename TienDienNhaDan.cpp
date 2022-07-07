#include<stdio.h>
#include<math.h>

int main(){
 long a;
 scanf("%ld", &a);
 if(a < 50){
  printf("%ld", a * 100);
 } else if(a >= 50 && a < 1000){
  printf("%ld", a * 500);
 } else if(a >= 1000 && a < 10000){
  printf("%ld", a * 1000);
 } else {
  printf("%ld", a * 1200);
 }
}