#include<stdio.h>
main(){
 int a, b, c;
 scanf("%d %d %d", &a, &b, &c);
 if(a==b || a==c || b==c)
  printf("KHONG CO SO O GIUA");
 else{
  if(a>b && a>c){
   if(c<b)
    printf("%d", b);
   else
    printf("%d", c);
  }
  else if(b>a && b>c){
   if(c<a)
    printf("%d", a);
   else
    printf("%d", c);
  }
  else if(c>a && c>b){
   if(b<a)
    printf("%d", a);
   else
    printf("%d", b);
  }
 }
}