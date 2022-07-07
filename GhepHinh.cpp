#include<stdio.h>
#include<math.h>
main(){
 long a , b , c , d ;
 scanf("%ld%ld%ld%ld", &a , &b , &c , &d ) ;
 if((a == c && b+d == a) || (a == d && b+c == a) || (b == c && a+d == b) || (b == d && a+c == b)){
  printf("YES") ;
 }
 else{
  printf("NO") ;
 }
}