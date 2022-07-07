#include"stdio.h"
#include"math.h"
int main()
{
long n;
long long x,y[2];
y[1]=-1;y[2]=-1;
scanf("%ld",&n);
meo1:
    {
        if(n==1)
        {
        scanf("%lld",&x);
        printf("%lld",abs(x));
        return 0;
        }
        else goto meo2;
    }
meo2:
    {
        if(n==2)
        {
            scanf("%lld %lld",&y[1],&y[2]);
            x =abs(y[1]*y[2]);
            printf("%lld",x);
            return 0;
        }
        else goto meo3;
    }
meo3:
    {
    while(n>0)
    {
        scanf("%lld",&x);
        x=abs(x);
        if(x>y[1])
        goto meo4;
        n--;
    }
    goto meo5;
    }
meo4:
    {
        if(x>y[2])
        {
            y[1]=y[2];
            y[2]=x;

        }
        else y[1]=x;
        n--;
        goto meo3;
    }
meo5:
    {
        long long ans=y[1]*y[2];
        printf("%lld",ans);
    }
}