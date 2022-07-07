#include<stdio.h>
main() {
 int n, i, x, y, tong = 0;
 scanf("%d", &n);
 while(n--) {
  tong = 0;
  scanf("%d %d", &x, &y);
  if(x>y){
   for(i=y+1; i<x; i++){
    if(i%2 != 0)
     tong += i;
   }
  }
  else if(x<y){
   for(i=x+1; i<y; i++){
    if(i%2 != 0)
     tong += i;
   }
  }
  printf("%d\n", tong);
 }
}