#include <stdio.h>
#define ll long long
int main()
{
 ll a, b;
 scanf("%lld%lld", &a, &b);
 if(b ==1) printf("%lld %lld", a*(a-1)/2, a*(a-1)/2);
 else
 {
  ll min = a/b;
  ll du = a%b;
  printf("%lld", (min*(min-1)/2 )*(b-du)+ ( (min + 1)*(min)/2 )*du);
  ll max = a-b+1;
  printf(" %lld",max*(max-1)/2);
 }
 
}