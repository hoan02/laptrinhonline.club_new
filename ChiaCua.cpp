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

int n;
int a[25];
int ans = INT_MAX;

void backTracking(int firstSum, int secondSum, int i) {
    if (i == n) {
        ans = min(ans, abs(firstSum - secondSum));
        return;
    }
    backTracking(firstSum + a[i], secondSum, i + 1);
    backTracking(firstSum, secondSum + a[i], i + 1);
}

int main() {
    fast_cin;
    cin >> n;
    Fo(i, 0, n) {
        cin >> a[i];
    }
    backTracking(0, 0, 0);
    cout << ans;
}