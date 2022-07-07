#include<stdio.h>
int main(){
 long x, sum , i, a;
 int n;
 scanf("%d", &n);
 while(n--){
  a = 1;
  sum = 1;
  scanf("%ld", &x);
  for(i=1; a+i<=x; i++){
   a += i;
   sum += a;
  }
  printf("%ld\n", sum);
 }
}