#include<stdio.h>
main(){
 int a[105], i;
 for(i=1; i<101; i++)
  scanf("%d", &a[i]);
 int max = a[0];
 int v = 0;
 for(i=1; i<101; i++){
  if(a[i] > max){
   max = a[i];
   v = i;
  }
 }
 printf("%d\n%d", max, v);
}