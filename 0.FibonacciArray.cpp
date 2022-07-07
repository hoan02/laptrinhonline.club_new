#include<stdio.h>
main(){
    int n, x, i;
    scanf("%d", &n);
    while(n--){
     scanf("%d", &x);
     long a[x+1];
     a[0]=0, a[1]=1;
     for(i=2; i<=x; i++){
      a[i] = (a[i-1]+a[i-2]);
  }
     printf("Fib(%d) = %ld\n", x, a[x]);
 }
}