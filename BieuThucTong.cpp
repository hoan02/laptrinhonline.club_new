#include<stdio.h>
main() {
 long x, tong=0;
 char s;
 for(;;){
  scanf("%ld%c", &x, &s);
  tong += x;
  if(s == '\n')
   break;
 }
 printf("%ld", tong);
}