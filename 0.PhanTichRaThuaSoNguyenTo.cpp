#include<stdio.h>
int main() 
{ 
long long n; 
long long dem; 
scanf("%ld", &n); 
for(long long i=2;i<=n;i++)
{
 dem=0; 
 while(n%i==0)
{
dem++;
n/=i;
}
if(dem>=1)
printf("\n%d %d",i,dem); 
}
}