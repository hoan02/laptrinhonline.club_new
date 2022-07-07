#include<stdio.h>

int main(){
 int x, y;
 scanf("%d%d", &x, &y);
 int sum = x;
 if(y == 1){
  sum = x * 2;
 } else {
  while(x >= y){
   sum += x / y;
   x = x / y + x % y;
  }
 }
 printf("%d", sum);
}