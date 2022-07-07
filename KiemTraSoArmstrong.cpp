#include<stdio.h>
main(){
    int a,b,c;
    scanf("%1d%1d%1d",&a,&b,&c);
    printf(100*a+10*b+c == a*a*a+b*b*b+c*c*c?"YES":"NO");
}