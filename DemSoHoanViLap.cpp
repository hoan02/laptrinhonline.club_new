#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
#define FOR(i, n) for(int i = 0 ; i < n; i++)
#define eFOR(i, a, b) for(ll i = a; i <= b; i++)

using namespace std;
typedef long long ll;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

const ll mod = 1e9 + 7;
const int N = 1e5 + 5;

ll A[N], B[N];

ll du(ll a, ll b)
{
 ll res = 1;
 while(b) 
 {
  if (b % 2)
  {
   res *= a;
   res %= mod;
  }
  a *= a;
  a %= mod;
  b /= 2;
 }
 return res;
}

ll nd(ll a)
{
 return du(a, mod - 2);
}

void init()
{
 A[0] = 1; B[0] = 1;
 for (ll i = 1; i <= 100000; i++)
 {
  A[i] = A[i-1] * i % mod;
  B[i] = B[i-1] * nd(i) % mod;
 }
}

void solve()
{
 int dem[26] = {};
 string s; cin >> s;
 int n = s.length();
 for (char c : s) dem[c - 'A']++;
 ll ans = A[n];
 for (auto x : dem) ans = ans * B[x] % mod;
 cout << ans << endl;
}

int main() {
 ios::sync_with_stdio(0); cin.tie(); cout.tie();
 int test = 1;
 init();
 cin >> test;
 for (int i = 1; i <= test; i++) solve();
 return 0;
}