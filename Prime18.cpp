#include "stdio.h"
long ucln(long a, long b)
{
    if (a % b != 0)
        return ucln(b, a % b);
    else
        return b;
}
long bcnn(long a, long b) { return (a * b) / ucln(a, b); }
long result(long n, long a, long b)
{
    long s = n / a + n / b - n / bcnn(a, b);
    return s;
}
int main()
{
    long t, a, b, m, n;
    scanf("%ld", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld%ld%ld%ld", &m, &n, &a, &b);
        printf("%ld\n", result(n, a, b) - result(m - 1, a, b));
    }
}