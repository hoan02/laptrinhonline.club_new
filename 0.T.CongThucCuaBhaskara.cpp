#include<stdio.h>
#include<math.h>
main(){
 double a, b, c;
 scanf("%lf %lf %lf", &a, &b, &c);
 double d=b*b - 4*a*c;
 if(d<=0 || a==0)
  printf("Impossivel calcular");
 else{
  double x1=(-b+sqrt(d)) / (2*a);
  double x2=(-b-sqrt(d)) / (2*a);
  printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
 }
}