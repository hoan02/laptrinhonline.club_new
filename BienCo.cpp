#include<stdio.h>
main(){
    int x, m;
    do{
        scanf("%d %d", &x, &m);
        if(x==0)break;
        printf("%ld\n", x*m);
    }while(x!=0 && m!=0);
}