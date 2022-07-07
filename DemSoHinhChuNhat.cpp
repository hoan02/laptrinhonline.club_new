#include<stdio.h>
#include<math.h>
int main(){
   long long a, b;
   scanf("%lld%lld", &a, &b);
   long long hcn = (a*(a+1)*b*(b+1))/4;
   printf("%lld", hcn%1000000007);
}