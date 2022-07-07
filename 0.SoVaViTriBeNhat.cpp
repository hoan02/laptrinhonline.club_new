#include<stdio.h>
main() {
 int n, i;
 scanf("%d", &n);
 int a[n+1];
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 int min = a[0];
 int v = 0;
 for(i=0; i<n; i++){
  if(a[i] < min){
   min = a[i];
   v = i;
  }
 }
 printf("Menor valor: %d", min);
 printf("\nPosicao: %d", v);
}