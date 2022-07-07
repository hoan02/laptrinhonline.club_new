#include<stdio.h>
main(){
 int n;
 scanf("%d", &n);
 int a[n+1], i;
 a[0] = 0;
 a[1] = 1;
 for(i=2; i<n; i++)
  a[i] = a[i-1] + a[i-2];
 for(i=0; i<n ; i++){
  if(i != n-1)
   printf("%d ",a[i]);
  else
   printf("%d", a[i]);
 }
}