#include<stdio.h>
#define ll long long
int main()
{
    ll n,s,mina,minb,s1=0,maxb;
    scanf("%lld%lld",&n,&s);
    int max=n>s?s:n;
    mina=s>2*n?s-2*n:0;
    for(int i=mina;i<=max;i++)
       {
        minb=(s-i)>n?s-i-n:0;
        maxb=s-i>n?n:s-i;
        s1+=(maxb+1-minb);
        
        }
    printf("%lld",s1);
}