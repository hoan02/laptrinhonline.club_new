#include <stdio.h>
int main(){
 long long n,p,s=0;
 scanf("%lld",&n);
 while(n!=0){
  printf("%lld",n%10);
  n/=10;
 }
}