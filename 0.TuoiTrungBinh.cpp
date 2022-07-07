#include<stdio.h>
int main(){
 int tong=0, a=0, dem=-1;
 do{
  tong+=a;
  dem++;
  scanf("%d",&a);
 }while(a>=0);
 if(dem>0)
  printf("%.2f",float(tong)/dem);
}