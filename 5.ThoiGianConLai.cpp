#include<stdio.h>
main(){
 int a,b;
 do{
  scanf("%d",&a);
 }while(a<0 || a>23);
 do{
  scanf("%d",&b);
 }while(b<0 || b>23);
 if(a+b==24)
  printf("0");
 if(a+b<24)
  printf("%d",a+b);
 if(a+b>24)
  printf("%d",a+b-24);
}