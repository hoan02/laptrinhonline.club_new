#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
 int n;
 scanf("%d",&n);
 int a[n+2];
 float c[n+2];
 for (int i=1;i<=n;i++)
  scanf(" %d",&a[i]);
 for(int i=1;i<=n;i++){
  c[i] = 360*1.0/(a[i]-180);
  if (c[i] == (int)c[i])
   printf ("\nYES");
  else
   printf ("\nNO");
 }
}