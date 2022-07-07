#include<stdio.h>
main(){
 int d, m, y;
 scanf("%d/%d/%d", &d, &m, &y);
 if(m==2){
  if(y%400==0 || y%4==0 && y%100!=0 && d<=29 && d>0 || d<=28 && d>0)
   printf("Ngay hop le");
  else
   printf("Ngay khong hop le");
 
 }
 else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
  if(d>0 && d<32)
   printf("Ngay hop le");
  else
   printf("Ngay khong hop le");
 }
 else{
  if(d>0 && d<31)
   printf("Ngay hop le");
  else
   printf("Ngay khong hop le");
 }
}