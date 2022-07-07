#include <stdio.h>

using namespace std;
typedef long long int ll;

int main () {
 ll n, c = 0, l = 0, x;
 scanf("%lld", &n);while(n--){
  scanf("%lld", &x);
  c += x % 2 == 0 ? 1 : 0;
  l += x % 2 != 0 ? 1 : 0;
 }
 x = c * (c-1)/2 + l * (l-1)/2;
 printf("%lld\n", x);
}