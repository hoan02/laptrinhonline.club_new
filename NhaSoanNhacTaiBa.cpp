#include<stdio.h>
#include<math.h>
main(){
 int a1, a2, a3,a4,a5,a6,a7,a8;
 scanf("%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8);
 if(a8>a7 && a7>a6 && a6>a5 && a5>a4 && a4>a3 && a3>a2 && a2>a1)
  printf("TANG");
 else if(a8<a7 && a7<a6 && a6<a5 && a5<a4 && a4<a3 && a3<a2 && a2<a1)
  printf("GIAM");
 else
  printf("KHONGBIET");
}