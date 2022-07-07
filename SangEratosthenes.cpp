#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

map<int, bool> mp;
int prime[1000002];

void init() {
    int cnt = 0;
    memset(prime, 1, sizeof(prime));
    prime[1] = 0;
    for (int i = 2; i <= 1000; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= 100000; j += i) prime[j] = false;
        }
    }
    for (int i = 2; i <= 1000000; i++) 
        if (prime[i]) prime[i] = ++cnt;
        else prime[i] = cnt;
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << prime[r] - prime[l-1] << endl;
}

int main() {
 ios::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    init();
    while (t--) solve();
 return 0;
}