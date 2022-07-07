#include<stdio.h>

int main()
{
 int a,b,c,d;
 scanf("%d%d%d%d", &a, &b, &c, &d);
 int start = a;
 if (a < c) {
        start = c;
 }
 int end = b;
 if (b > d) {
        end = d;
 }
 if(end - start < 0) {
        printf("\n 0");
 }
 else {
        printf("\n%d", end - start);
 }
 return 0;
}