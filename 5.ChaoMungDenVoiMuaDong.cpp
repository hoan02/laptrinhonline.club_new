#include <stdio.h>

int main(){
 long a,b,c;
 scanf("%ld%ld%ld", &a, &b, &c);
 if (a>b && b<=c)
  printf(":)");
 if (a<b && b>=c)
  printf(":(");
 if (a<b && b<c && c-b<b-a)
  printf(":(");
 if (a<b && b<c && c-b>=b-a)
  printf(":)");
 if (a>b && b>c && b-c<a-b)
  printf(":)");
 if (a>b && b>c && b-c>=a-b)
  printf(":(");
 if (a==b && b<c)
  printf(":)");
 if (a==b && b>c)
  printf(":(");

 return 0;
}