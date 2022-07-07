#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ll long long
#define For(i, a, b) for (ll i = (a); i <= (b); ++i)
#define Fo(i, a, b) for (ll i = (a); i < (b); ++i)
#define Ford(i, a, b) for (ll i = (a); i >= (b); --i)
#define fi first
#define se second
typedef pair<ll, ll> l4;
typedef pair<double, double> dd;
typedef pair<int, int> ii;

ll n, a, b, c, d;

ll solve() {
    cin >> n >> a >> b >> c >> d;
    ll ans = 0;
    for (ll i = 0; i * a <= n; ++i) {
        ans = max(ans, i * b + (n - i * a) / c * d);
    }
    return ans;
}

int main() {
    fast_cin;
    int t;  cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}