#include<stdio.h>
main(){
 int a[20002]={}, b[20002]={};
 int n, m, x;
 scanf("%d", &n);
 while(n--){
  scanf("%d", &x);
  a[x]++;
 }
 scanf("%d", &m);
 while(m--){
  scanf("%d", &x);
  b[x]++;
 }
 for(int i=0; i<20002; i++){
  if(a[i] != b[i])
   printf("%d ", i);
 }
}