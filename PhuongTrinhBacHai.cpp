#include<stdio.h>
#include<math.h>
main(){
 double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a==0){
  if (b==0){
   if (c==0)
    printf ("vo so nghiem");
      else
    printf ("vo nghiem");
  }
     else
   printf ("%.3lf", -c/b);
 }
    else{
  double d = b*b-4*a*c;
     if(d<0)
   printf("vo nghiem");
     else if(d==0)
   printf("%.3lf", -b/(2*a));
     else{
   double x1=(-b+sqrt(d))/(2*a);
   double x2=(-b-sqrt(d))/(2*a);
      if(x1<x2)
    printf("%.3lf\n%.3lf", x1, x2);
      else
    printf("%.3lf\n%.3lf", x2, x1);
  }
    }
}