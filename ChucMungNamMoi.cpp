#include<stdio.h>
main() {
 int n, i, j;
 char s[3];
 scanf("%d", &n);
 fflush(stdin);
 scanf("%s", s);
 int nua=(int)(n/2), cmnm=(n-7)/2;
 for(i=1; i<=n; i++){
  for(j=1; j<=n; j++){
   if(i<=nua){
    if(j<=nua-i+1 || j>=nua+2+i-1)
     printf("---");
    else
     printf("%s", s);
   }
   else if(i==nua+1){
    if(j==cmnm+1)
     printf("--CHUC MUNG NAM MOI--");
    if(j<=cmnm || j>cmnm+7)
     printf("---");
   }
   else{
    if(j<=i-(nua+1) || j>=n-(i+(nua-1)-n))
     printf("---");
    else
     printf("%s", s);
   }
  }
  printf("\n");
 }
}