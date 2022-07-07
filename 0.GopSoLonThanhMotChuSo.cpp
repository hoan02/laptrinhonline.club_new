#include<stdio.h>
main(){
    long long a,b,c;
    do{
        scanf("%lld%lld", &a, &b);
        if(a==0&&b==0)
         break;
        a=a%9==0?9:a%9;
        b=b%9==0?9:b%9;
        if(a>b)
            printf("1\n");
        else if(a==b)
         printf("0\n");
        else
         printf("2\n");
    }while(a!=0 || b!=0);
}