#include<stdio.h>
#include<math.h>
int main(){
 int n,i,j;
 double a[100],b[100],c[100];
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
    }
 for(i=0;i<n;i++){
  printf("%0.1lf\n",(a[i]*2+b[i]*3+c[i]*5)/10);
 }
}