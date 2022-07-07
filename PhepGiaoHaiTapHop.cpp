#include<stdio.h>

main(){
 long n, m;
 long check[10005]={};
 long i, x;
 scanf("%ld", &n);
 while(n--){
  scanf("%ld", &x);
  check[x]=1;
 }
 scanf("%ld", &m);
 while(m--){
  scanf("%ld", &x);
  if(check[x]==1)
   check[x]=2;
 }
 for(i=0; i<10005; i++)
  if(check[i]==2)
   printf("%ld ", i);
}