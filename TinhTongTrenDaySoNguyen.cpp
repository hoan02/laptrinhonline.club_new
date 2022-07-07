#include<stdio.h>
#include<math.h>

int main() {
 long long n, sum = 0, tong = 0;
 int i, a[100000];
 scanf("%lld", &n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }
 for (i = 0; i < n; i++) {
  if (abs(a[i]) > 65535) break; 
  else {
  sum+=a[i];
  tong += sum;
 }
 }
 printf("%lld", tong);
}