#include<stdio.h>
#include<math.h>
main()
{
 double a1,a2,a3,a4,a5,a6,tbd,s=0;
 int dem=0;
 scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&a5,&a6);
 if (a1>0){
  s+=a1;
  dem=dem+1;
 }
 if (a2>0){
  s+=a2;
  dem=dem+1;
 }
 if (a3>0){
  s+=a3;
  dem=dem+1;
 }
 if (a4>0){
  s+=a4;
  dem=dem+1;
 }
 if (a5>0){
  s+=a5;
  dem=dem+1;
 }
 if (a6>0){
  s+=a6;
  dem=dem+1;
 }
 if (dem!=0){
  tbd=(s*1.0)/dem;
  printf("\n%d Gia tri duong\n%.1lf",dem,tbd);
 }
 else
 printf("\n%d Gia tri duong\n0.0",dem);
}