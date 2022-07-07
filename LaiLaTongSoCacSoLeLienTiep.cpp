#include<stdio.h>
main(){
 long long x, y;
 scanf("%lld %lld", &x, &y);
 if(x>y){
  int c=y;
  y=x;
  x=c;
 }
 if(x%2==0)
  x++;
 else
  x+=2;
 if(y%2==0)
  y--;
 else
  y-=2;
 long long ssh = (y-x)/2+1;
 long long kq = (y+x)*ssh/2;
 printf("%lld\n", kq);
}