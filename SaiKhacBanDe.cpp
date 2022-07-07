#include <stdio.h>
#include <math.h>

int main(){
 long n;
 scanf("%ld", &n);
 long a[n];
 for (int i=0; i<n; i++){
  scanf("%ld", &a[i]);
 }
 long T=0;
 for (int i=0; i<n-1; i++)
  for (int j=i+1; j<n; j++){
   T+= abs(a[i]-a[j]);
  }
 printf("%ld", T);
}