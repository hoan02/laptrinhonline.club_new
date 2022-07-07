#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1e9+7;
const ll MAX = 1e6;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

int main()
{
 //qsort((arr,num,sizeof(int),LowerToGreater);
  //freopen("Input.txt", "r", stdin);
 std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
 map <ll, ll> Marked;
    ll n, k; cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        if (x == k) 
        {
            if (i > 1) Marked[i - 1] = 1;
            if (i < n) Marked[i + 1] = 1;
        }
    }
 if (Marked.empty()) cout << -1;
 else
    for (auto i : Marked) cout << i.first << " ";
}