#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c, m,max;
 scanf("%d%d%d", &a, &b, &c);
 m = a>b?a:b;
 max = m>c?m:c;
 printf(" Max = %d", max);
 return 0; 
 }