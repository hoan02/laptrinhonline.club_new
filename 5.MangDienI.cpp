#include<stdio.h>
int main(){
 int i,n;
 int a[100];
 scanf("%d",&n);
 for(i=0;i<=9;i++){
     a[0]=n;
     a[i+1]=a[i]*2;
  printf("N[%d] = %d\n",i,a[i]);
 }
}