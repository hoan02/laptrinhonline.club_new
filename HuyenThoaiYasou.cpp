#include<stdio.h>
#include<math.h>
#include<limits.h>
main(){
 int n;
 scanf("%d",&n);
 int a[n+1];
 for(int i=1;i<=n;i++){
  scanf("%d",&a[i]);
 }
 int demloc=0;
 int vitri=1;
 while(vitri<n-1){
  if(a[vitri]==a[vitri+1] && a[vitri]==1){
  demloc++;
  if(vitri<n-1) vitri=vitri+3;
  }
  else vitri=vitri+1;
  }
 
 printf("\n%d",demloc);
}