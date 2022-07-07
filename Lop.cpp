#include <stdio.h>
int main(){
 int a[100],b[100];
 int n;
 scanf("%d",&n);
 for (int i=1; i<=n; i++)
  scanf("%d",&a[i]);
 int max=1, dem=1, ans=a[1]; 
 for (int i=1; i<n; i++){
  dem=1;
  for(int j=i+1; j<=n; j++)
   if (a[j]==a[i]) {
    dem++;
   }
  if (dem>=max) {
   max = dem; ans=a[i];
  }
 }
 printf("%d",ans);
 return 0;
}