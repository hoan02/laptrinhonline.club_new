#include<stdio.h>
#include<math.h>

int main(){
 int n,a[101],s1=0,s2=0,min=1e6;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
  scanf("%d",&a[i]);
  s1+=a[i];
  s2+=a[i]*a[i];
  }
 for(int i=-100;i<=100;i++){
     int D= s2-2*i*s1+n*i*i;
  if(min>D){
      min=D;
   }
  }
 printf("%d",min);
return 0;
}