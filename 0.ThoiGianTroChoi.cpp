#include<stdio.h>
main(){
 int m, n;
 scanf("%d %d", &m, &n);
 if(m<n)
  printf("Tran dau keo dai %d gio", n-m);
 else
  printf("Tran dau keo dai %d gio", n-m+24);
}