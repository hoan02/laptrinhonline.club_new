#include<stdio.h>
main(){
 int a, b, i, j;
 int arr[102]={}, dem=0;
 for(i=0; i<3; i++){
  scanf("%d %d", &a, &b);
  for(j=a; j<b; j++)
   if(arr[j]==0)
    dem++, arr[j]=1;
 }
 printf("%d", 100-dem);
}