#include<stdio.h>
#include<math.h>

int main() {
 int a;
 long s = 1;
 scanf("%d", &a);
 for (int i = 1; i <= a; i++) {
  s*=i;
 }
 printf("%ld", s);
}