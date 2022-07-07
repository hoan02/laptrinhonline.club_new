#include<stdio.h>
#include<math.h>
int main(){ 
  int n, a, b, i;
  float s=0;
  scanf("%d", &n);
  for(i=1; i<=n; i++){
   scanf("%d%d", &a, &b);
   if(a==1001){
    s+=(b*1.5);
   }else if(a==1002){
    s+=(b*2.5);
   }else if(a==1003){
    s+=(b*3.5);
   }else if(a==1004) s+=(b*4.5);
   else if(a==1005) s+=(b*5.5);
  }printf("%.2f", s);
}