#include<stdio.h>
main(){
 int h, m, s;
 int h1=18, m1=0, s1=0,d1,d2;
 scanf("%d%d%d", &h, &m, &s);
 if(h>=6 && h<18){
  printf("OFF");
  return 0;
 }
 else if(h<6 || h>=18){
  do{
   s1+=10;
   if(s1>=60){
    s1-=60;
    m1++;
   }
   if(m1==m && s1>=s){
    d1=1;
    break;
   }
   s1+=15;
   if(m1>=60){
    m1-=60;
    h1++;
   }
   if(m1==m && s1>=s){
    d2=1;
    break;
   }
  }while(m1!=m && s1<s);
  
 }
 if(d1==1)
  printf("ON");
 else if(d2==1)
  printf("OFF");
}