#include<stdio.h>
#include<math.h>
int main(){
 int a[100], b[100], c[100];
 int count = 0;
 for(int i = 0; i < 100; i++){
  scanf("%d", &a[i]);
  if(a[i] == 0)
   break;
  scanf("%d%d", &b[i], &c[i]);
  count++;
 }
 long S;
 for(int i = 0; i < count; i++){
  S = sqrt(a[i] * b[i] * 100 / c[i]);
  printf("%ld\n", S);
 }
}