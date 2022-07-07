#include"stdio.h"

int main()
{
 long n;
 scanf("%ld", &n);
  long s=0;
 int x,y;
 int a[2010]={0}, b[2010]={0};

 for(long i=1;i<=n;i++)
 {
  scanf("%i%i", &x, &y);
  a[x+y]++;
  b[1000+x-y]++;
 }
 
 for(int i=0;i<=2000;i++)
 s+=(a[i]*(a[i]-1)/2)+(b[i]*(b[i]-1)/2);
 printf("%ld", s);
}