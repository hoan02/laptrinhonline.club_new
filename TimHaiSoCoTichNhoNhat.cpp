#include<stdio.h>
#include<limits.h>
long i;
long timmax(long a[], long *n){
 long max=LONG_MIN;
 for(i=0; i<*n; i++)
  if(a[i]>max)
   max=a[i];
 return max;
}
long timmin(long a[], long *n){
 long min=LONG_MAX;
 for(i=0; i<*n; i++)
  if(a[i]<min)
   min=a[i];
 return min;
}
long timmax2(long a[], long *n){
 long max2=LONG_MIN, kq=timmax(a, n);
 for(i=0; i<*n; i++)
  if(a[i]>max2 && a[i]!=kq)
   max2=a[i];
 return max2;
}
long timmin2(long a[], long *n){
 long min2=LONG_MAX, kq=timmin(a, n);
 for(i=0; i<*n; i++)
  if(a[i]<min2 && a[i]!=kq)
   min2=a[i];
 return min2;
}
main(){
 long n;
 scanf("%ld", &n);
 long a[n+1], checkam=0, checkduong=0;
 for(i=0; i<n; i++){
  scanf("%ld", &a[i]);
  if(a[i]<0)
   checkam++;
  else
   checkduong++;
 }
 if(checkam==0)
  printf("%ld", timmin(a, &n)*timmin2(a, &n));
 else if(checkam*checkduong!=0)
  printf("%ld", timmin(a, &n)*timmax(a, &n));
 else if(checkduong==0)
  printf("%ld", timmax(a, &n)*timmax2(a, &n));
}