#include<stdio.h>

int main(){
 int a, b, c;
 scanf("%d%d%d", &a, &b, &c);
 if(a + b + c < 24 && a + b + c >= 0){
  printf("%d", a + b + c);
 } else if(a + b + c < 0){
  printf("%d", a + b + c + 24);
 } else {
  printf("%d", a + b + c - 24);
 }
}