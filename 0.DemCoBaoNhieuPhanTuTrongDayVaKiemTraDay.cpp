#include<stdio.h>
main(){
 int n, c, d;
 scanf("%d", &n);
 scanf("%d %d", &c, &d);
 int a[n+1], i, dem=0, b[n+1];
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0; i<n; i++){
  if(a[i]>=-c && a[i]<=d){
   dem++;
   b[i]=a[i];
  }
 }
 printf("%d",dem);
 if(dem==1 || dem==0)
  printf("\nYES");
 else{
  dem=0;
  printf("\n");
  for(i=0;i<n-1;i++){
   if(b[i]>=b[i+1]){
    dem++;
   }
  }
  if(dem!=0)
   printf("NO");
  else
   printf("YES");
 }
}