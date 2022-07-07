#include<stdio.h>
main() {
 int t;
 int gio=0, phut=0;
 scanf("%d", &t);
 while(t>=60){
  t -= 60;
  phut ++;
  if(phut>=60){
   gio ++;
   phut = 0;
  }
 }
 printf("%d:%d:%d", gio, phut, t);
}