#include<stdio.h>  
#include<math.h>  

int main()  
{  
int n,a[100],b[100],c[100];
scanf("%d",&n);
for(int i=0; i<n;i++){
 scanf("%d%d%d",&a[i],&b[i],&c[i]);
}
for(int i=0;i<n;i++){
 if(c[i]==1){
  printf("%02d:%02d - Canh cua mo ra!\n",a[i],b[i]);
 }
 else if(c[i]==0){
  printf("%02d:%02d - Canh cua dong lai!\n",a[i],b[i]);
 }
}
}