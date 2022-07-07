#include<stdio.h>
main(){
 int n;
 scanf("%d", &n);
 int dem=0, x, ts=5;
 while(ts--){
  scanf("%d", &x);
  if(x==n)
   dem++;
 }
 printf("%d", dem);
}