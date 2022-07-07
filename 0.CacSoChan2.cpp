#include<stdio.h>
main(){
 int n, i;
 scanf("%d", &n);
 if(n%2!=0)
  n--;
 for(i=2; i<=n; i+=2)
  printf("%d\n", i);
}