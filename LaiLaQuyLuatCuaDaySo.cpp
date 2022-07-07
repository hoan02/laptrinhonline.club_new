#include <stdio.h>

#define ull unsigned long long

ull solve(ull n){ return n * (n - 1) / 2 + 1; }

int main()
{
    int t;
    scanf("%d", &t);
    ull x, res;
    while (t--)
    {
        scanf("%llu", &x);
        printf("%.0llu\n", solve(x));
    }
}