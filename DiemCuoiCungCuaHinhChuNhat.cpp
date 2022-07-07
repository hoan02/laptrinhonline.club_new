#include<stdio.h>
main() {
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d\n%d %d\n%d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(x1==x2)
     printf("%d ", x3);
    else if(x2 == x3)
     printf("%d ", x1);
    else
     printf("%d ", x2);
    if(y1==y2)
     printf("%d", y3);
    else if(y2 == y3)
     printf("%d", y1);
    else
     printf("%d", y2);
}