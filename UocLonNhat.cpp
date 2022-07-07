#include<stdio.h>
#include<math.h>
int main(){
 int t,a[100];
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
  scanf("%d",&a[i]);
 }
 for(int i=1;i<=t;i++){
  printf("%d\n",a[i]/2);
 }
}