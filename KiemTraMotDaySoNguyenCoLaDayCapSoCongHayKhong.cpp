#include<stdio.h>
main(){
 int n, i, dem=0;
 do{
  scanf("%d", &n);
 }while(n<3 || n>1000);
 int a[n+1];
 for (i=0; i<n; i++)
  scanf("%d", &a[i]);
 int d = a[1]-a[0];
 for(i=0; i<n-1; i++)
  if(a[i+1]-a[i] != d)
   dem++;
 if(dem == 0)
  printf("Day la day cap so cong voi cong sai %d",d);
 else
  printf("Day khong la day cap so cong");
}