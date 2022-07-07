#include<stdio.h>
#include<math.h>
int main(){
 int a, b, s;
 scanf("%d%d", &a, &b);
 s=abs(a - b);
 printf("%d\t",((a+b)-s)/2);
 printf("%d",s/2);
}