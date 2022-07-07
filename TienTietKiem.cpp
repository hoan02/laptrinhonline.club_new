#include <stdio.h>

int main(){ 
 double t, s, p; 
 int n;
 scanf("%lf%lf%lf", &t, &s, &p);
 for(p = 0.01 * p, n=0; s < t; s+=s*p , n++);
 printf("%d\n",n);
 return 0;
}