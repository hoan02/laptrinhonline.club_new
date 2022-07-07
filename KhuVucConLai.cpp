#include<stdio.h>
main(){
 char c;
 int a[12][12], i, j;
 scanf("%c", &c);
 for(i=0; i<12; i++)
  for(j=0; j<12; j++)
   scanf("%d", &a[i][j]);
 float tong=0;
 for(i=1; i<=5; i++)
  for(j=11-i; j>=0+i; j--)
   tong += a[j][i-1];
 if(c == 'S')
  printf("%.1f", tong);
 else if(c == 'M')
  printf("%.1f", tong/30);
}