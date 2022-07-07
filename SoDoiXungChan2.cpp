#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define ull unsigned long long

int Sochuso(int n)
{
 return (log10(n)+1);
}

int daonguoc(int n)
{
int x, m = 0;
while (n>0)
{
   x=n%10;
   n=n/10;
   m=m*10+x;
}
 return m;
}

int main()
{
int n, i, d, m;
ull a;
 scanf("%d",&n);
 d=Sochuso(n);
 m=daonguoc(n);
 a=n*pow(10,d)+m;
 printf("%llu",a);
}