#include<stdio.h>
#define PI 3.14159
main() {
 float a, b, c;
 scanf("%f %f %f", &a, &b, &c);
 printf("TRIANGULO: %.3f", (a*c)/2);
 printf("\nCIRCULO: %.3f", PI*c*c);
 printf("\nTRAPEZIO: %.3f", (a+b)*c/2);
 printf("\nQUADRADO: %.3f", b*b);
 printf("\nRETANGULO: %.3f", a*b);
}