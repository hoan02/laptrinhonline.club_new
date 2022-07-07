#include<stdio.h>
int main(){
 long a,b;
 scanf("%ld%ld",&a,&b);
 long c=a+b;
 long d=a-b;
 long e=a*b;
 long g=a/b;
 long h=a%b;
 printf("%ld+%ld=%ld",a,b,c);
    printf("\n%ld-%ld=%ld",a,b,d);
    printf("\n%ld*%ld=%ld",a,b,e);
    printf("\n%ld/%ld=%ld",a,b,g);
    printf("\n%ld%%%ld=%ld",a,b,h);
 return 0;
 
}