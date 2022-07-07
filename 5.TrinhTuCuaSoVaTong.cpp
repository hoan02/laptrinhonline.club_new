#include<stdio.h>
#include<math.h>

int main() {
 int m, n;
 int s;
 while(1) {
  scanf("%d%d", &m, &n);
  
  if (m <= 0 || n <= 0) {
   break;
  }
  else {
  s = (m + n)*(abs(m - n)+1)/2; 
  if (m > n) {
   for (int i = n; i <= m; i++) {
    printf("%d ", i);
   }
   printf("Tong=%d\n", s);
  }
  else {
   for (int i = m; i <= n; i++) {
    printf("%d ", i);
   }
   printf("Tong=%d\n", s);
      }
        }   
 }
}