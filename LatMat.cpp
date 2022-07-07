#include<stdio.h>
main() {
 long n, p;
 scanf("%ld%ld", &n, &p);
 if(n%2 == 0)
  n++;
 long check1=p/2, check2=(n-p)/2;
 if(check1>check2)
  printf("%ld", check2);
 else
  printf("%ld", check1);
}