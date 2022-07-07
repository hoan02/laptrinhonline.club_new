#include<stdio.h>
int main(){
 int i,j,a[100],k=0;
 for(i=1;i=i;i++){
  scanf("%d",&a[i]);
  if(a[i]==0) break;
  k++;
  }
 for(i=1;i<=k;i++){
  printf("\n");
  for(j=1;j<=a[i];j++){
   printf("%d ",j);}}
  
return 0;
}