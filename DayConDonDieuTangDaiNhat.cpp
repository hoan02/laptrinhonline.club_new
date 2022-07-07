#include<cstdio>
#include<algorithm>
using namespace std;

const int N = 30000+2;
int n, a[N], lst[N]; 

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d", a+i);
    int maxlen = 0;
    for(int i = 0; i < n; ++i) {
        int dp = lower_bound(lst, lst+maxlen, a[i]) - lst;
        if(dp == maxlen) ++maxlen, lst[dp] = a[i];
        else lst[dp] = min(lst[dp], a[i]);
    }
    printf("%d\n", maxlen);
    return 0;
}