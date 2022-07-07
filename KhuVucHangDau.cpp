#include<stdio.h>

main(){
 char c;
 float a[13][13];
 scanf("%c", &c);
 int i, j;
 float tong=0;
 for(i=0; i<12; i++){
  for(j=0; j<12; j++){
   scanf("%f", &a[i][j]);
   if(i<j && i<12-1-j)
    tong+= a[i][j];
  }
 }
 if(c=='S')
  printf("%.1f", tong);
 else
  printf("%.1f", tong/30);
}