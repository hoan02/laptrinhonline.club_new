#include<stdio.h>
int a[1000006];
main(){
    long n, x, i;
    scanf("%ld", &n);
    for(i=1; i<=n; i++){
        scanf("%ld", &x);
        if(x<1 || x>n || x==a[x]){
         printf("NO");
   return 0;
  }
    }
    printf("YES");
}