#include"stdio.h"
#include"stdlib.h"
int main(){
    long long n;
    int i;
    scanf("%ld",&n);
    if(n==2) {
    printf("YES");exit(0);
    }
    if(n==1){
        printf("NO");exit(0);
    }
    if(n<0||n%2==0) {
    printf("NO");
    exit(0);
    }
    for(i=3;i*i<=n;i+=2)
        if(n%i==0){
            printf("NO");
            exit(0);
        }
    printf("YES");
}