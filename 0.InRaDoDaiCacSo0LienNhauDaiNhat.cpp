#include<stdio.h>
main(){
 int n;
 scanf("%d", &n);
 int a[n+1], i;
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 int max = 0;
 int dem = 0;
 for(i=0; i<n; i++){
  if(a[i] != 0)
   dem = 0;
  else
   dem ++;
  if(dem > max)
   max = dem;
 }
 printf("%d", max);
}