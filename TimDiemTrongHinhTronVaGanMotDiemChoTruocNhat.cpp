#include<stdio.h>
#include<math.h>
int main ()
{
 double x,y,u,v,r,k;
 scanf("%lf%lf%lf",&x,&y,&r);
 scanf("%lf%lf",&u,&v);
 k=sqrt((u-x)*(u-x)+(v-y)*(v-y));
 if(k<=r) printf("(%.3lf, %.3lf)",u,v);
 else
 {
  k=k/r;
  double a= x+(u-x)/k;
  double b= y+(v-y)/k;
  printf("(%.3lf, %.3lf)",a,b);
 }
  



 
}