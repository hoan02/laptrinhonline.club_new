#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll A[2][2];

void multi(ll f[2][2], ll a[2][2])
{
 int T[2][2];
 for (int i = 0; i < 2; i++)
 {
  for (int j = 0; j < 2; j++)
  {
   ll tmp = 0;
   for (int k = 0; k < 2; k++) tmp += f[i][k] * a[k][j];
   T[i][j] = tmp % MOD;
  }
 }
 for (int i = 0; i < 2; i++)
  for (int j = 0; j < 2; j++) f[i][j] = T[i][j];
}

void powMod(ll f[2][2], int n)
{
 while(n)
 {
  if (n % 2) multi(f, A);
  multi(A, A);
  n /= 2;
 }
}

void solve()
{
 ll b, c, n;
 cin >> b >> c >> n;
 ll f[2][2] = {{1, 0}, {0, 1}};
 ll F[2][2] = {{-b*b*b +3 * b * c, b*b - 2*c}, {b*b - 2*c, -b}};
// A[2][2] = {{-b, 1}, {-c, 0}};
 A[0][0] = -b; A[0][1] = 1; A[1][0] = -c; A[1][1] = 0;
 if (n <= 1) cout << -b << endl;
 else if (n <= 2) cout << F[0][1] << endl;
 else if (n <= 3) cout << F[0][0] << endl;
 else 
 {
  powMod(f, n - 3);
  multi(F, f);
  cout << (F[0][0] + MOD) % MOD << endl;
 }
}

int main() {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int test = 1;
 cin >> test;
 for (int i = 1; i <= test; i++) solve();
 return 0;
}