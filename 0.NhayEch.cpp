#include<stdio.h>
main() {
 int p, n;
 scanf("%d %d", &p, &n);
 int a[n+1], dem = 0;
 for(int i=0; i<n; i++)
  scanf("%d", &a[i]);
 for(int i=0; i<n-1; i++){
  if(a[i+1] > a[i] && a[i+1] - a[i] > p){
   dem ++;
   break;
  }
 }
 if(dem != 0)
  printf("GAME OVER");
 else
  printf("YOU WIN");
}