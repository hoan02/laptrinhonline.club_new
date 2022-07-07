#include<stdio.h>
main(){
 int t;
 scanf("%d", &t);
 int n, x, y, i;
 while(t--){
  scanf("%d %d %d", &n, &x, &y);
  for(i=x; i<n; i+=x)
   if(i%x==0 && i%y!=0)
    printf("%d ", i);
  printf("\n");
 }
}