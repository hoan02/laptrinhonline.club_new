#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ldb long double
#define x first
#define y second
#define p pair<ll, ll>
#define vt vector<ll> 
#define pb push_back
#define all(x) x.begin(), x.end()
#define tp pair<ll, pair<ll, ll>>
#define fi first
#define se second.first
#define th second.second

const long long MOD = 1000000007;
const long double PI = 3.141592653589793238462643383279502884;
const long long INF = 1e18;
const int MAXN = 100000;
class ST {
    public:
    ll n;
    ll st[MAXN * 2 + 1];
    ST(ll n) {
        this -> n = n;
    }
    void init() {
        for(int i = 0; i < n; i++) {
            cin >> st[n + i];
        }
        for(int i = n - 1; i > 0; i--) {
            st[i] = max(st[i << 1], st[i << 1 | 1]);
        }
    }
    ll query (ll l, ll r) {
        ll ans = -INF;
        for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if(l & 1) ans = max(ans, st[l++]);
            if(r & 1) ans = max(ans, st[--r]);
        }
        return ans;
    }
};
void solve(){
    ll n, q;
    cin >> n >> q;
    ST seg(n);
    seg.init();
    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << seg.query(l - 1, r) << '\n'; 
    }
}
int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int q = 1;
    //cin >> q;
    while(q--){
        solve();
    }
    return 0;    
}