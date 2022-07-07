#include"stdio.h"
int main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
if(a+b+c==0||a*b*c<=0)
{
 printf("No");return 0;
}
printf("R1 = %.2f\n",b+c+b*c/a);
printf("R2 = %.2f\n",a+c+a*c/b);
printf("R3 = %.2f",b+a+b*a/c);

}