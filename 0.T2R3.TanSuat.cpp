#include<stdio.h>
main(){
 int n, i, j, c;
 scanf("%d", &n);
 int a[n+1];
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 for(i=0; i<n-1; i++){
  for(j=i+1; j<n; j++){
   if(a[i]>a[j]){
    c = a[i];
    a[i] = a[j];
    a[j] = c;
   }
  }
 }
 int dem=1;
 for(i=0; i<n; i++){
  if(a[i+1] != a[i]){
   printf("%d xuat hien %d lan\n", a[i], dem);
   dem=1;
  }
  else
   dem++;
 }
}