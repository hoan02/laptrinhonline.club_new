#include<stdio.h>

int main(){
    long i, n, t = 0, d = 0, b = 0, res = 0;
    scanf("%ld", &n);
    long x[n+5], y[n+5];
    for(int i = 0; i < n; i++){
        scanf("%ld%ld", &x[i], &y[i]);
        if(x[i] > y[i])t++;
        else if(x[i] < y[i])d++;
        else b++;
    }
    res = t * d + t * b + b * d;
    printf("%ld", res);
    return 0;
}