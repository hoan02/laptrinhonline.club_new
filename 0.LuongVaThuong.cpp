#include<stdio.h>
#include<math.h>
int main(){
 char c[20];
 double a,b;
 scanf("%s%lf%lf",&c,&a,&b);
 printf("\nTONG = R$ %.2lf",a+(b*0.15));
}