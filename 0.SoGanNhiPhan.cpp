#include <stdio.h>
int main()
{
    char str[8] = {}; int max = 0;
    scanf("%s", str);
    for(int i = 0; i < 8; i++)
        if(max < str[i] - '0') max = str[i] - '0';
    printf("%d", max);
}