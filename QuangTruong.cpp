#include<stdio.h>
#include<math.h>
int main () {
 long n, m, a;
 scanf("%ld%ld%ld", &n, &m, &a);
 if (m%a==0 && n%a==0) printf ("%ld", m/a * n/a);
 else {
  if (m%a==0 && n%a!=0)  printf ("%ld", m/a * (1+n/a));
  else {
   if (n%a==0 && m%a!=0)  printf ("%ld", n/a * (1+m/a));
   else {
    long c=m/a+1;
    long d=n/a+1;
    printf ("%ld", c*d);
   } 
  } 
 } 

}