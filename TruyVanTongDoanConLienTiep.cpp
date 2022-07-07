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

int main() {

    fast_cin;
    ll n, m, L, R;
    cin >> n >> m;

    ll a[n + 1];
    a[0] = 0;
    For(i, 1, n) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    while (m--) {
        cin >> L >> R;
        cout << a[R] - a[L-1] << endl;
    }
    return 0;
}