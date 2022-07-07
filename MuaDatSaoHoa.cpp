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

ll mod = 1e9 + 7;
ll n;
ll DV[2][2], Base[2][2];

void Mul(ll f[2][2], ll m[2][2])
{
    ll a = (f[0][0] * m[0][0] % mod + (f[0][1] * m[1][0] % mod + mod) % mod) % mod;
    ll b = (f[0][0] * m[0][1] % mod + f[0][1] * m[1][1] % mod) % mod;
    ll c = (f[1][0] * m[0][0] % mod + (f[1][1] * m[1][0] % mod + mod) % mod) % mod;
    ll d = (f[1][0] * m[0][1] % mod + f[1][1] * m[1][1] % mod) % mod;
    DV[0][0] = a; DV[0][1] = b; DV[1][0] = c; DV[1][1] = d;
}

void Pow(ll dv[2][2], ll n) {
    if (n <= 1) {
        return;
    }
    Pow(dv, n / 2);
    Mul(dv, dv);
    if (n & 1) {
        Mul(dv, Base);
    }
}


int main() {

    fast_cin;
    DV[0][0] = Base[0][0] = 4; DV[0][1] = Base[0][1] = 1; DV[1][0] = Base[1][0] = -1; DV[1][1] = Base[1][1] = 0;

    cin >> n;

    if (n == 1) {
        return !printf("4");
    }
    if (n == 2) {
        return !printf("14");
    }

    Pow(DV, n - 2);
    cout << 2 * (14 * DV[0][0] % mod + (4 * DV[1][0] % mod + mod) % mod) % mod;
    return 0;
}