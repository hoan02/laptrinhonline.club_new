#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>

int main()
{
 int n, k;
 scanf("%d%d", &n, &k);
 long long s=0;
 int *a= (int*)malloc(sizeof(int)*n);
 for(int i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 std::sort(a, a+n);
 if(k>=n)
 {
  for(int i=0; i<n; i++)
   s+=a[i];
 }
 else
 {
  for(int i=n-1; i>n-1-k; i--)
  {
   s+=a[i];
  }
 }
 printf("%lld", s);
 
 free(a);
 return 0;
}