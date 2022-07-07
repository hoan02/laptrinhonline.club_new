#include <stdio.h>

int main () {
    int n, m;
    scanf ("%d", &n);
    while(n--){
        int tg = 0;
        scanf ("%d", &m);
        while(m){
            tg +=m%3;
            m /= 3;
        }
        printf ("%d ", tg);
    }
    return 0;
}