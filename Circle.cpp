#include<stdio.h>
#include<math.h>
main(){
 double r;
 scanf("%lf",&r);
 if(r<0) printf("NO CIRCLE");
 else{
  long a,b;
  a=round(r*2*M_PI*100);
  printf("%.2f",(double)a/100);
  b=round(r*r*M_PI*100);
  printf("\n%.2f",(double)b/100);
 }
}