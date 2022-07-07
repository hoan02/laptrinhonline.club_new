#include<stdio.h>
main() {
 int t;
 long a, b, c;
 scanf("%d", &t);
 while(t--){
  scanf("%ld %ld %ld", &a, &b,&c);
  if(b>a){
   printf("TIEN ");
   if(c>b)
    printf("TIEN\n");
   else if(c<b)
    printf("LUI\n");
   else
    printf("DUNG\n");
  }
  else if(a>b){
   printf("LUI ");
   if(c>b)
    printf("TIEN\n");
   else if(c<b)
    printf("LUI\n");
   else
    printf("DUNG\n");
  }
  else{
   printf("DUNG ");
   if(c>b)
    printf("TIEN\n");
   else if(c<b)
    printf("LUI\n");
   else
    printf("DUNG\n");
  }
 }
}