#include<stdio.h>
#include<math.h>
int main () { 
 long long n,a,b,i;
 scanf("%lld",&n);
 for (i=sqrt(n);i>0;i--) {
  if (n%i==0) {
   a=i;
   b=n/i;
   break;
  }
 }
 a=log(a)/log(10);
 b=log(b)/log(10);
 (a>b)?(printf("%lld",a+1)):(printf("%lld",b+1));
 return 0;
}