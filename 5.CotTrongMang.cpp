#include<math.h>
#include<stdio.h>
main(){
 int c;
 char x;
 scanf("%d",&c);
 scanf("\n%c",&x);
 double a[12][12];
 for(int i=0;i<12;i++){
  for(int j=0;j<12;j++)
   scanf("%lf",&a[i][j]);
 }
 double s=0;
 for(int i=0;i<12;i++){
  s+=a[i][c];
 }
 if(x=='S')
  printf("%.1lf",s);
 if(x=='M')
  printf("%.1lf",1.0*s/12);
}