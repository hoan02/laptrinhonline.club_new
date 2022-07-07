#include<stdio.h>
main() {
 long i, a;
 scanf("%ld", &a);
 for(i=1; i>0 && i<=a; i++){
  if(a%i == 0)
  printf("%ld\n", i);
 }
}