#include<stdio.h>
#include<math.h>
main() {
 long a, c, b;
 scanf("%ld %ld %ld", &a, &c, &b);
 if(fabs(c-a) > fabs(c-b))
  printf("CAT_B");
 else if(fabs(c-a) < fabs(c-b))
  printf("CAT_A");
 else
  printf("The mouse has escaped");
}