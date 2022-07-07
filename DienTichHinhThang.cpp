#include<stdio.h>
#include<math.h>
#define PI 3.14
main(){
 double a,b,c=45,s;
 scanf("%lf%lf",&a,&b);
 if (a>b){
  double h=(a-b)/2;
  double s=1.0*h*(a+b)/2;
  printf("%.2lf",s);
 }
 else {
  double h=(b-a)/2;
  double s=1.0*h*(a+b)/2;
  printf("%.2lf",s);
 } 
}