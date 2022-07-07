#include<stdio.h>
#include<math.h>
int main () {
 int S, n, T;
 scanf("%d%d%d", &S, &n, &T);
 int a=-1,b,c=-S,d;
 b=(T-n*n)/n;
    d=b*b-4*a*c;
   printf("%.f %.f",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));    
    }