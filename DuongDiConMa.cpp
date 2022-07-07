#include<stdio.h>

typedef struct {
 int x, y;
}toaDo;
main(){
 toaDo c[105];
 int n;
 scanf("%d", &n);
 int a[n+1][n+1], i, j;
 for(i=0; i<n; i++){
  for(j=0; j<n; j++){
   scanf("%d", &a[i][j]);
   c[a[i][j]].x= i+1;
   c[a[i][j]].y= j+1;
  }
 }
 for(i=1; i<=n*n; i++){
  printf("(%d,%d) ", c[i].x, c[i].y);
 }
}