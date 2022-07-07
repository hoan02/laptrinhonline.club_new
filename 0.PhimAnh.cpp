#include<stdio.h>
main() {
 double a, b;
 scanf("%lf %lf", &a, &b);
 printf("%.2lf%%", (b-a)*100.0/a);
}