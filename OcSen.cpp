#include<stdio.h>
long a,b,h; int main(){ scanf("%ld%ld%ld",&a,&b,&h);
if(h == a){
            printf("1");
    }
    else{
        if((h-b)%(a-b)==0)
            printf("%d", (h-b)/(a-b));
        else
            printf("%d", (h-b)/(a-b)+1);
    }
}