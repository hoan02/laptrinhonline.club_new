#include<stdio.h>
main(){
 int n, a, b;
 scanf("%d", &n);
 while(n--){
  scanf("%d %d", &a, &b);
  printf("%d\n", a+b);
 }
}