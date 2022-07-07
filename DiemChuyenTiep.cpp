#include<stdio.h>
main(){
 int n;
 scanf("%d", &n);
 int x, i;
 for(i=0; i<n; i++){
  scanf("%d", &x);
  if(x && x!=0){
   printf("%d", i);
   return 0;
  }
 }
 if(x)
  printf("0");
 else
  printf("-1");
}