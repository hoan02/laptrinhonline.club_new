#include <stdio.h>
#include <math.h>

int biachai(int m, int n, int k)
{
 int sochai = m/n;
 int sonapchai = sochai;
 while(sonapchai >= k) {
  sochai += sonapchai/k;
  sonapchai = sonapchai/k + sonapchai%k;
 }
 return sochai;
}
int main()
{
 int n;
 scanf("%d", &n);
 for(int i=0;i<n;i++) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", biachai(a, b, c));
 }
 
}