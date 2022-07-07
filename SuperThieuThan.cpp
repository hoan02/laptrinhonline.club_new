#include <stdio.h>

int main()
{
    int h, l, x;
    scanf("%d%d", &h, &l);

    int tran[h + 1] = {};
    int day[h + 1] = {};

    for (int i = 0; i < l; i++)
    {
        scanf("%d", &x);
        tran[x]++;
    }

    for (int i = 0; i < l; i++)
    {
        scanf("%d", &x);
        day[x]++;
    }

    for (int i = h - 1; i >= 0; i--)
    {
        day[i] += day[i + 1];
        tran[i] += tran[i + 1];
    }

    int res = day[0] + tran[h];
    for (int i = 0; i <= h; i++)
        // printf("%d %d %d\n", i, tran[h - i], day[i]);
        res = res < day[i] + (tran[h - i]) ? res : day[i] + (tran[h - i]);
    printf("%d", res);

    return 0;
}