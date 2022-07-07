#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll A[2][2], F[2][2];
ll P, S;
int n;

void multi(ll f[2][2], ll a[2][2])
{
 ll T[2][2];
 for (int i = 0; i < 2; i++)
 {
  for (int j = 0; j < 2; j++)
  {
   ll tmp = 0;
   for (int k = 0; k < 2; k++) tmp = (tmp + f[i][k] * a[k][j]) % MOD;
   T[i][j] = tmp;
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

int main() {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 cin >> P >> S >> n;
 F[0][0] = S*S*S - 3*P*S;
 F[0][1] = F[1][0] = S*S - 2*P;
 F[1][1] = S;
 A[0][0] = S; A[0][1] = 1;
 A[1][0] = -P; A[1][1] = 0;
 ll f[2][2] = {{1, 0}, {0, 1}};
 if (n <= 0) cout << 2;
 else if (n <= 1) cout << F[1][1];
 else if (n <= 2) cout << -F[1][0];
 else if (n <= 3) cout << F[0][0];
 else 
 {
  powMod(f, n - 3);
  multi(F, f);
  cout << (F[0][0] + MOD) % MOD;
 }
 return 0;
}