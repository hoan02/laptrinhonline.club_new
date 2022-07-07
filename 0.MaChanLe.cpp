#include<stdio.h>
main(){
 int d=0;
 char c;
 for(;;){
  scanf("%c", &c);
  if(c=='1')
   d++;
  else if(c=='\n')
   break;
  printf("%c", c);
 }
 if(d%2==0)
  printf("0");
 else
  printf("1");
}