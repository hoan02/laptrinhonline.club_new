#include<stdio.h>
#include<math.h>
main(){
 const float PI = 3.14159265;
 float a, b, h, s;
 int alpha;
 scanf("%f%f\n%d", &a, &b, &alpha);
 h = b * sin(alpha * (PI/180));
 s = h * a;
 printf("%.3f", s);
}