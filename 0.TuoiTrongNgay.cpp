#include<stdio.h>
main() {
 int ngay, nam=0, thang=0;
 scanf("%d", &ngay);
 while(ngay>=30) {
  if(ngay >= 365){
   ngay -= 365;
   nam ++;
  }
  else if(ngay >= 30){
   ngay -= 30;
   thang ++;
  }
 }
 printf("%d nam\n%d thang\n%d ngay", nam, thang, ngay);
}