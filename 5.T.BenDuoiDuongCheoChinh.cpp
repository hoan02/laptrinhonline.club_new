#include<stdio.h>
main(){
 char c;
 int a[13][13], i, j;
 scanf("%c", &c);
 for(i=0; i<12; i++)
  for(j=0; j<12; j++)
   scanf("%d", &a[i][j]);
 float tong=0;
 for(i=1; i<12; i++){
  for(j=0; j<i; j++){
   tong += a[i][j];
  }
 }
 if(c == 'S')
  printf("%.1f", tong);
 else
  printf("%.1f", tong/66);
}