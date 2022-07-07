#include<stdio.h>
main() {
 int n, i, dem=1;
 scanf("%d", &n);
 for(i=0; i<n; i++){
   printf("%d %d %d Nam\n", dem, dem+1, dem+2);
  dem += 4;
 }
}