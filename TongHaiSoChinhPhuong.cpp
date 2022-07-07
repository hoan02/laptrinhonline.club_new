#include<stdio.h>
#include<math.h>

bool check(long long x){
 if(x<0 || x%4>1 || x%3>1)
  return false;
 long long t= sqrt(x);
 return t*t==x;
}
main(){
 long long x, i, dem=0;
 scanf("%lld", &x);
 for(i=0; i*i*2<=x; i++){
  if(check(x-i*i))
   dem++;
 }
 printf("%lld", dem);
}