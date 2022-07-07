#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
 long long n,m,i;
 scanf("%lld%lld",&n,&m);
 int v=1;
 for(i=1;i<=m;i++){
  v = v*n;
  v = v%10;
 }
 printf ("%d",v);

}