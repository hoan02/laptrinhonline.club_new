#include <stdio.h>
#include <math.h>

main(){
 int n,m,sum=0,d=0;
 scanf("%d %d",&n,&m);
 int a[n+2];
 for(int i=1;i<=n;i++)
  scanf(" %d",&a[i]);
 for(int i=1;i<=n;i++){
  if(a[i]+d<m){
   sum = sum+ a[i]+d;
   d=0;
  }
  else{
   if(d>m){
    sum +=m;
    d=a[i];
   }
   else{
    sum +=m;
    d = a[i]+d-m;
   }
  }
 }
 if(d>m) sum +=m;
 else sum +=d;
 printf("%d",sum);
 
}