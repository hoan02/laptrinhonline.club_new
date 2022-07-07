#include<stdio.h>

main(){
 int n;
 scanf("%d", &n);
 char c;
 float x;
 float tong=0, tc=0, tr=0, ts=0;
 while(n--){
  scanf("%f %c", &x, &c);
  tong+= x;
  switch(c){
   case 'C':
    tc+= x;
    break;
   case 'R':
    tr+= x;
    break;
   case 'S':
    ts+= x;
    break;
  }
 }
 printf("Tong so: %d\n", (int)tong);
 printf("Tong so tho: %d\n", (int)tc);
 printf("Tong so chuot: %d\n", (int)tr);
 printf("Tong so ech: %d\n", (int)ts);
 printf("Ty le phan tram cua tho: %.2f%%\n", tc/tong*100);
 printf("Ty le phan tram cua chuot: %.2f%%\n", tr/tong*100);
 printf("Ty le phan tram cua ech: %.2f%%\n", ts/tong*100);
}