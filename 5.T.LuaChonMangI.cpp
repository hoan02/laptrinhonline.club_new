#include<stdio.h>
#include<math.h>
int ktra(float x){
 if(ceil(x) == floor(x))
  return 0;
 return -1;
}
main(){
 float a[101];
 int i;
 for(i=0; i<100; i++){
  scanf("%f", &a[i]);
  if(a[i] <= 10){
   if(ktra(a[i]) == 0)
    printf("A[%d] = %d\n", i, (int)a[i]);
   else
    printf("A[%d] = %.1f\n", i, a[i]);
  }
 }
}