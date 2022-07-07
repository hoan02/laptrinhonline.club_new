#include<stdio.h>
main(){
 int n, i, j;
 scanf("%d", &n);
 int d=2*n-1;
 for(i=0; i<d/2+1; i++){
  for(j=0; j<d; j++){
   if(j==d/2+i || j==d/2-i)
    printf("*");
   else
    printf(" ");
  }
  printf("\n");
 }
 for(i=d/2-1; i>=0; i--){
  for(j=0; j<d; j++){
   if(j==d/2+i || j==d/2-i)
    printf("*");
   else
    printf(" ");
  }
  printf("\n");
 }
}