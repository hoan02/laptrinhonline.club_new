#include<stdio.h>
main() {
 int a[5], b[5];
 int i, j, c;
 for(int i=0; i<3; i++){
  scanf("%d", &a[i]);
  b[i] = a[i];
 }
 for(i=0; i<3; i++){
  for(j=i+1; j<3; j++){
   if(a[i] > a[j]){
    c = a[i];
    a[i] = a[j];
    a[j] = c;
   }
  }
 }
 for(i=0; i<3; i++)
  printf("%d\n", a[i]);
 for(i=0; i<3; i++)
  printf("%d\n", b[i]);
}