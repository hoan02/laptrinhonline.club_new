#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ll long long
#define For(i, a, b) for (ll i = a; i <= b; ++i)
#define Fo(i, a, b) for (ll i = a; i < b; ++i)
#define Ford(i, a, b) for (ll i = a; i >= b; --i)
#define fi first
#define se second

int getSize(int x) {
    if (x % 2 == 0 || x % 5 == 0) {
        return -1;
    }

    int num = 0, siz = 1;
    for (siz = 1; siz <= x; ++siz) {
        num = (num * 10 + 1) % x;
        if (num == 0) {
            return siz;
        }
    }
    return -1;
}

int main() {
    fast_cin;
    int n, x;   cin >> n;
    while(n--) {
        cin >> x;
        cout << getSize(x) << endl;
    }
}