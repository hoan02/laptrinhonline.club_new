#include<stdio.h>
#include<math.h>
int main() {
 int A,B,C;
 scanf("%d%d%d",&A,&B,&C);
 if(A==B&&B!=C||B==C&&C!=A||C==A&&A!=B)
  printf("2");
 else if(A==B&&B==C)
  printf("1");
 else 
  printf("3");
}