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

    // dinh ly Fermat nho
    ll mod = 1e3;
    ll Pow(ll x, ll y) {
        ll res = 1;
        x %= mod;
        while (y > 0) {
            if (y & 1) {
                res = (res * x) % mod;
            }
            y >>= 1; // y = y / 2;
            x = (x * x) % mod;
        }
        return res;
    }

    int main() {
        string a, b;
        cin >> a >> b;
        ll temp = (a[a.size() - 1] - '0');
        if (a.size() >= 2)   temp += (a[a.size() - 2] - '0') * 10;
        if (a.size() >= 3)   temp += (a[a.size() - 3] - '0') * 100;

        ll remain = 0;
        Fo(i, 0, b.size())  remain = (remain * 10 + b[i] - '0') % mod;

        ll ans = Pow(temp, remain);
        if (ans < 100)  cout << '0';
        if (ans < 10)  cout << '0';
        
        cout << ans;
        return 0;
    }