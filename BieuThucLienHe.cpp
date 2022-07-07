#include<stdio.h>
#include<math.h>
int main(){
int a,b,r,q; 
scanf("%d%d",&a,&b); 
for(int i=0;i<abs(b);i++){ 
if((a-i)%b==0) 
r=i; }q=(a-r)/(float)b; 
printf("%d %d",q,r); }