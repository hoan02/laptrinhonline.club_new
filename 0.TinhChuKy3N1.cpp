#include<stdio.h>
main(){
 int n, dem=1, i;
 int a[10000];
 scanf("%d", &n);
 a[0] = n;
 while(n != 1){
  if(n%2 == 0){
   n /= 2;
   a[dem++] = n;
  }
  else{
   n = 3*n+1;
   a[dem++] = n;
  }
 }
 printf("%d ", dem);
 for(i=0; i<dem; i++)
  printf("%d ", a[i]);
}