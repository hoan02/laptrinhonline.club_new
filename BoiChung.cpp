#include<stdio.h>
int ucln(int a, int b){
 if(a==b)
  return a;
 if(a>b)
  a-=b;
 else
  b-=a;
}
int bcnn(int a, int b){
 return a/ucln(a,b)*b;
}
main(){
 long n;
 scanf("%ld", &n);
 if(n%2!=0)
  printf("%ld", n*(n-1)*(n-2));
 else{
  if(n%3==0)
   printf("%ld", (n-1)*(n-2)*(n-3));
  else
   printf("%ld", n*(n-1)*(n-3));
 }
}