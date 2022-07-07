#include<stdio.h>
main(){
 char c;
 int a[12][12], i, j;
 scanf("%c", &c);
 for(i=0; i<12; i++)
  for(j=0; j<12; j++)
   scanf("%d", &a[i][j]);
 float tong=0, dem=0;
 for(i=1; i<6; i++)
  for(j=11-i; j>=i; j--)
   tong += a[12-i][j];
 if(c == 'S')
  printf("%.1f", tong);
 else if(c == 'M')
  printf("%.1f", tong/30.0);
}