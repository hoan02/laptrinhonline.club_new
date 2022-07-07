#include<stdio.h>
#include<math.h>
int main(){
 int t,i;
 scanf("%d",&t);
 int a[100],b[100];  
 for(i=1;i<=t;i++)
  scanf("%d",&a[i]);
 for(i=1;i<=t;i++){
  long int k=1;
  if(a[i]>3){
   while(a[i]>4){
    a[i]-=3;
    k*=3;
   }
   if(a[i]==4)
    k*=4;
   if(a[i]==3)
    k*=3;
   if(a[i]==2)
    k*=2;
   printf("%ld\n",k);
  }
  else{
   printf("%d\n",a[i]);
  }
 }  
}