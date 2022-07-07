#include<stdio.h>
#include<math.h>
main(){
 int a,i;
 scanf("%d",&a);
 int b[a+2],e,dem=0,d;
 float c[a+2];
 for (i=1;i<=a;i++){
  scanf ("%d %f",&b[i],&c[i]);
 }
 float max = 0;
 for (i=1;i<=a;i++){
  if (c[i]<8)
   dem++;
 }
 for (i=1;i<=a;i++){
  if (max <= c[i]){
   max = c[i];
   d = i;
  }
 }
 if (dem == a)
  printf ("Diem toi thieu khong dat");
 else
  printf ("%d",b[d]);
}