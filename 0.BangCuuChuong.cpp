#include<stdio.h>

int main(){
 int a;
 scanf("%d", &a); 
 for(int j = 1; j <= 10; j++){
  printf("%d x %d = %d\n", j, a, j * a);
 }
}