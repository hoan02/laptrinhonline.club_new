#include<stdio.h>
#include<math.h>
double can2(double x){
 if(x<0)
  return -1;
 return sqrt(x);
}
main(){
 int n, i;
 scanf("%d", &n);
 double a[n+1];
 for(i=0; i<n; i++)
  scanf("%lf", &a[i]);
 double x=0, x1=0;
 for(i=0; i<n; i++){
  x += a[i];
  x = can2(x);
  if(x<0){
   printf("Khong tinh duoc S1\n");
   goto s2;
  }
 }
 printf("%.3lf\n", x);
 s2:
  for(i=n-1; i>=0; i--){
   x1 += a[i];
   x1 = can2(x1);
   if(x1<0){
    printf("Khong tinh duoc S2");
    return 0;
   }
  }
  printf("%.3lf", x1);
}