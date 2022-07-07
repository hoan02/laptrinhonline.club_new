#include<stdio.h>
main(){
    float a[13][13], tong=0;
    char c;
    int i, j;
    scanf("%c",&c);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%f",&a[i][j]);
    for(i=0;i<12;i++)
        for(j=0;j<11-i;j++)
            tong+=a[i][j];
    if(c=='S')
        printf("%.1f",tong);
    else
        printf("%.1f", tong/66);
}