#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;

int main() {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int a[101], dp[10001], n, q, M;
 cin >> n >> q;
 
 for (int i = 0; i < n; i++) cin >> a[i];
 dp[0] = 0;
 for (int i = 1; i <= 10000; i++) ;
 sort(a, a + n);
 for (int i = 1; i <= 10000; i++)
 {
  dp[i] = 10001;
  for (int j = 0; j < n && a[j] <= i; j++) 
   dp[i] = min(dp[i], dp[i-a[j]] + 1);
 }
 while(q--)
 {
  cin >> M;
  if (dp[M] == 10001) cout << -1 << endl;
  else cout << dp[M] << endl;
 }
 return 0;
}