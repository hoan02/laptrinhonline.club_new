#include<stdio.h>
#include<math.h>
main()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(A+B>C&&A+C>B&&B+C>A || A+B>D&&A+D>B&&B+D>A || D+B>C&&D+C>B&&B+C>D || A+D>C&&A+C>D&&D+C>A){
        printf("S");
    }
    else{
        printf("N");
    }

}