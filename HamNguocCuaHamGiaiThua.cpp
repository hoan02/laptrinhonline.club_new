#include<stdio.h>
main(){
 unsigned long long m;
 scanf("%lld", &m);
 long i, tich=1;
 for(i=1;tich != m; i++){
      tich *= i;
 }
 printf("%ld", --i);
}