#include<stdio.h>
main(){
 float x, t=0, c=0;
 do{
  scanf("%f", &x);
  if(x>=0 && x<=10){
   t += x;
   c++;
  }
  else
   printf("Nhap sai\n");
  if(c==2){
   printf("TB = %.2f", t/2);
   return 0;
  }
 }while(1);
}