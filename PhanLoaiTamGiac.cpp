#include<stdio.h>
main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=(b+c) || b>=(a+c) || c>=(a+b))
        printf("KHONG PHAI TAM GIAC");
    else if(a==b || b==c || a==c)
        printf("TAM GIAC CAN");
    else if(a*a+b*b==c*c || c*c+b*b==a*a || b*b==a*a+c*c)
     printf("TAM GIAC VUONG");
    else
        printf("TAM GIAC THUONG");
}