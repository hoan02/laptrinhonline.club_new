#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool NamNhuan(int year){
 if(year%400==0 || (year%4==0 && year%100!=0)) return true;
 return false;
}

int DayOfMonth(int month, int year){
 int ngay;
 switch(month){
   case 1: case 3: case 5: case 7: case 8: case 10: case 12:
   ngay = 31;
   break;
  case 4: case 6: case 9: case 11:
   ngay = 30;
   break;
  case 2:
   if(NamNhuan(year)==true){
    ngay = 29;
    break;
   }
   else{
    ngay = 28;
    break;
   }
 }
 return ngay;
}


int main(){
 int d1,m1,y1;
 scanf("%d%d%d",&d1,&m1,&y1);
 int d2,m2,y2;
 scanf("%d%d%d",&d2,&m2,&y2);
 int i,sum = 0;
 if(y2!=y1){
  sum += d2;
  sum += DayOfMonth(m1,y1) - d1;
  for(i=m1+1;i<=12;i++){
   sum += DayOfMonth(i,y1);
  }
  for(i=1;i<m2;i++){
   sum += DayOfMonth(i,y2);
  }
  for(i=y1+1;i<y2;i++){
   if(NamNhuan(i)==true) sum += 366;
   else sum += 365;
  } 
 }
 if(y2==y1){
  if(m2!=m1){
   sum += d2;
   sum += DayOfMonth(m1,y1) - d1;
   for(i=m1+1;i<m2;i++){
    sum += DayOfMonth(i,y1);
   }
  }
  else{
   sum += d2-d1;
  }
 }
  
 printf("\n%d",sum);
 
 return 0;
}