#include <stdio.h>
#include <math.h>

main(){
 int n,v,u;
 float d;
 scanf("%d",&n);
 if(n<0)
  printf("ERROR");
 else{
  d = 0.5*n;
  u = 0.5*n;
  v = n/50;
  if( d+v == (float)u+v)
   printf("%d",u+5*v);
  else
   printf("%.1f",d+5*v);
 }
}