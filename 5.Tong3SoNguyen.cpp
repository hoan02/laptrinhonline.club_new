#include <stdio.h>

int main()
{
    long long a[7503];
    long long n, s;
    scanf("%lld%lld", &n, &s);

    if (3 * n < s)
        printf("0");
    else if (n >= s)
        printf("%lld", (s + 1) * (s + 2) / 2);
    else
    {
        long long kq = 0;
        for (int i = 0; i <= s; i++)
            a[i] = i <= n ? i + 1 : (i <= 2 * n ? 2 * n - i + 1 : 0);
        for (int i = 0; i <= n; i++)
            kq += a[s - i];
        printf("%lld", kq);
    }
}