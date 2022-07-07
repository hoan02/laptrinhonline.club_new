#include<stdio.h>

int main(){
 long n, a[100];
 scanf("%ld", &n);
 for(int i = 1; i <= n; i++){
  scanf("%ld", &a[i]);
 }
 
 double max = a[1] / n; 
 for(int i =1; i <= n; i++){
  if(a[i] / 1.0*(n - i + 1) > max){
   max = a[i] /(1.0*(n - i + 1));
  }
 }
 printf("%0.2lf", max);
 
 long A = 0, count = 0;
 for(int i = 1; i < n; i++){
  A += (a[i] + a[i + 1]);
  count++;  
 }
 if(count == 0){
  printf("\n%ld", a[1]);
 } else {
  printf("\n%ld", A);
 }
}