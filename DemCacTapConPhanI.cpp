#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve()
{
 int n, m;
 cin >> n >> m;
 ll a[n], res[m + 1] = {};
 res[0] = 1;
 bool kt = 0;
 for (int i = 0; i < n; i++) 
 {
  cin >> a[i];
  if (a[i] == 0) kt = 1;
 }
 for (int i = 0; i < n; i++)
  for (int j = m; j > a[i] - 1; j--) res[j] += res[j - a[i]];
 if (m == 0) cout << (res[m] - 1) % MOD;
 else cout << res[m] % MOD;
}

int main() {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int test = 1;
// cin >> test;
 for (int i = 1; i <= test; i++) solve();
 return 0;
}