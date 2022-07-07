#include<stdio.h>
#include<math.h>
main(){
 long n,m,x1,x2;
 double y1,y2;
 scanf("%ld%ld%lf",&n,&x1,&y1);
 scanf("\n%ld%ld%lf",&m,&x2,&y2);
 double t1=x1*y1,t2=x2*y2;
 double tong=t1+t2;
 printf("VALOR A PAGAR: R$ %.2lf",tong);
 }