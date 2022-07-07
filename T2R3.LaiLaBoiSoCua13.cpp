#include<stdio.h>
#define csc(a,b,d) ((b-a)/d+1)*(b+a)/2
int main()
{
    long long a,b,x,y,s;
    scanf("%lld %lld",&a,&b);
    if(a>b) {x=b;y=a;}
    else {x=a;y=b;}
    s=csc(x,y,1);
    while(x%13!=0) x++;
    while(y%13!=0) y--;
    printf("%lld",s-csc(x,y,13));
}