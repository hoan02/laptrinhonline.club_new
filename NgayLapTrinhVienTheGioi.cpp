#include<stdio.h>
int nhuan(int x){
 if(x%4==0 && x%100!=0 || x%400==0)
  return 0;
 return 1;
}
main(){
 int n;
 scanf("%d", &n);
 if(n>2008){
  if(nhuan(n)==0)
   printf("12.09.%d - Happy Programmer's Day!", n);
  else
   printf("13.09.%d - Happy Programmer's Day!", n);
 }
 else
  printf("-1");
}