#include<stdio.h>
#include<math.h>
int phanBiet(float x){
 if(x == 0)
  return 0;
 if(ceil(x) == floor(x))
  return 1;
 else
  return 0;
}
main(){
 int n;
 float a, b;
 float x1, x2;
 scanf("%d", &n);
 while(n--){
  scanf("%f %f", &a, &b);
  x1 = sqrt(a*a + b*b);
  x2 = sqrt(abs(a*a - b*b));
  int kq1 = phanBiet(x1);
  int kq2 = phanBiet(x2);
  if(kq1 == 1)
   printf("%d\n", (int)x1);
  else if(kq2 == 1)
   printf("%d\n", (int)x2);
  else
   printf("-1\n");
  
 }
}