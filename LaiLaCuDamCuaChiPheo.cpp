#include <stdio.h>

#define ull unsigned long long int
#define mod 1000000007
int main()
{
    ull t, a, b, c;
    scanf("%llu", &t);
    // ull x[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%llu", &a);
        b = a + 1;
        c = a + 2;
        if (a % 2 == 0)
            a /= 2;
        else
            b /= 2;

        if (a % 3 == 0)
            a /= 3;
        else if (b % 3 == 0)
            b /= 3;
        else
            c /= 3;
        a = ((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod;

        printf("%llu\n", a);
    }
    // for (int i = 0; i < t; i++)
    //     printf("%llu\n", x[i]);
}