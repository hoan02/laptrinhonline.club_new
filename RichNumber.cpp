#include<stdio.h>

int main(){
 int a, sum = 0; 
 scanf("%d", &a); 
 for(int i = 1; i < a; i++){
  if(a % i == 0){
   sum += i;
  }
 }
 if(a < 1){
  printf("Poor Number");
 } else if(sum > a){
  printf("Rich Number");
 } else {
  printf("Poor Number");
 }
}