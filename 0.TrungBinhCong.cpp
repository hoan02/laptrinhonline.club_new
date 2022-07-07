#include <stdio.h>
int main(){
 int n,m,i,d=0,d1=0,a[2000],s=0;
 scanf("%d", &n);
 for(i=0;i<n;i++)
 scanf("\n%d", &a[i]);
  for(i=0;i<n;i++){
   s=s+a[i];
   d=d+1; 
  }
  for(i=0;i<n;i++){
   if(a[i]<s/d) d1=d1+1; 
  }
  printf("%d %d",s/d,d1); 
}