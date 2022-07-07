#include<stdio.h>
main() {
 int n, i;
 scanf("%d", &n);
 int a[n+1];
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 int k, x;
 scanf("%d %d", &k, &x);
 for(i=0; i<=n-k; i++)
  a[n-i] = a[n-i-1];
 a[k] = x;
 for(i=0; i<=n; i++)
  printf("%d ", a[i]);
}