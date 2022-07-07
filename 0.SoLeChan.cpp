#include<stdio.h>
#include<math.h>

int main() {
 int i,n;
 int dl=0,dc=0,tl=0,tc=0;
 scanf("%d",&n);
 int a[n];
 for(i=0;i < n;i++)
 scanf("%d",&a[i]);
 for(i =0;i < n;i++){
  if(a[i] %2 != 0){
   dl++;
   tl+=a[i];
  }
  else if( a[i] %2 == 0){
   dc++;
   tc+=a[i];
  }
 }
 if(tl==0) dl=1;
 if(tc==0) dc=1;
 printf("%lld",tl/dl);
 printf("\n%lld",tc/dc);
    return 0;
}