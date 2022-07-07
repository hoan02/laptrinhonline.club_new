#include <stdio.h>
int main(){
    int n, k, a;
    scanf("%d%d", &n, &k);
    for(int i=1; i<=k; i++){
        a = n%10;
        if(a==0)
            n/=10;
        else
            n=n-1;
    }
    printf("%d",n);
}