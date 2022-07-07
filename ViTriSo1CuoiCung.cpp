#include<stdio.h>
main(){
 int t;
 scanf("%d\n", &t);
 int i, v;
 char c;
 while(t--){
  v=-1;
  for(i=0; ;i++){
   scanf("%c", &c);
   if(c=='1')
    v=i;
   else if(c=='\n')
    break;
  }
  printf("%d\n", v);
 }
}