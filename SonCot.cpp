#include<stdio.h>
main() {
    int n, k, cach;
    scanf("%d%d", &n, &k);
    cach = k;
    for (int i=1; i<n; i++)
        cach *= (k - 1);
    printf("%d", cach);
}