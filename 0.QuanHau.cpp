#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, x[100], c[100], d1[100], d2[100], cnt = 0;
int a[100][100];

void ql(int i)
{
 for(int j = 1; j <= n; ++j)
 {
  if(c[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
  {
//   x[i] = j;
   c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
   if(i == n)
   {
    ++cnt;
   }
   else ql(i + 1);
   c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
  }
 }
}
int main()
{
 scanf("%d", &n);
 ql(1);
 printf("%d", cnt);
 return 0;
}