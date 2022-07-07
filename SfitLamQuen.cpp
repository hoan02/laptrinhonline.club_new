#include<stdio.h>
#include<math.h>
int main(){
 long long n;
 scanf("%lld",&n);
 if(n<=1)
  printf("0");
 else
  printf("%lld",n*(n-1)/2);
}