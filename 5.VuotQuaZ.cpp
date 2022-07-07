#include<stdio.h>
main() {
 int x, z;
 scanf("%d", &x);
 do{
  scanf("%d", &z);
 }while(z<=x);
 int i, tong=x, dem=1;
 while(tong <= z){
  dem++;
  tong += ++x;
 }
 printf("%d", dem);
}