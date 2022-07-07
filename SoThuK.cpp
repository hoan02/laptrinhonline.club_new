#include<stdio.h>
main(){
 long n, k;
 scanf("%ld%ld", &n, &k);
 printf("%ld", k+(k-1)/(n-1));
}