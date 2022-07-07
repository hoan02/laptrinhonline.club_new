#include<stdio.h>

int xoa0(long long a) {
 long long sd = 0;
 long long s[1000];
 int k, i = 0;
 int dem = 0;
 while (a > 0) {
  k = a % 10;
  a/=10;
  if (k != 0) {
   s[i++] = k;
   dem++;
  }
 }
 for (i = dem - 1; i >= 0; i--) {
  sd = sd * 10 + s[i];
 }
 return sd;
}

int main() {
 long long a, b;
 scanf("%lld%lld", &a, &b);
 long long tong;
 tong = a + b;
 if (xoa0(a) + xoa0(b) == xoa0(tong)) {
  printf("YES");
 }
 else {
  printf("NO");
 }
}