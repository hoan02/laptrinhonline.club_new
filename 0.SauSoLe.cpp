#include<stdio.h>

int main(){
  int x,y;
  scanf("%d", &x);

  y = x%2==0?x+1:x;
  for(int i=y; i<=y+10; i+=2)
    printf("%d\n", i);
}