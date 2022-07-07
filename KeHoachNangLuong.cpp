#include<stdio.h>
main(){
 int n;
 scanf("%d", &n);
 int a, b, c, d;
 while(n--){
  scanf("%d %d %d %d", &a, &b, &c, &d);
  float tb = (d-b)*100.0/(c-a);
  printf("%.2f", (int)tb/100.0);
 }
}