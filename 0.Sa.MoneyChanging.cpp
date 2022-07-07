#include<stdio.h>

int main(){
    int n, a, b, c, d, e, f;
    int dem = 0;
 scanf("%d", &n);
 int S = 1000 - n;
 if(n > 0 && n < 1000){
  a = S / 500;
  b = (S - a * 500) / 100;
  c = (S - a * 500 - b * 100) / 50;
  d = (S - a * 500 - b * 100 - c * 50) / 10;
  e = (S - a * 500 - b * 100 - c * 50 - d * 10) / 5;
  f = (S - a * 500 - b * 100 - c * 50 - d * 10 - e * 5);
  dem = dem + a + b + c + d + e + f;
 }
 printf("%d", dem);

}