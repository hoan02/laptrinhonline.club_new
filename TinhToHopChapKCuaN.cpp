#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = 1e9 + 7;
ll gcd(ll a , ll b){ if(b == 0) return a ; return gcd(b , a%b);}
ll lcm(ll a , ll b){ return a / gcd(a,b) * b;}
ll powMod(ll a , ll b , ll m)
{
 ll res = 1;
 a %= m;
 while(b)
 {
  if(b % 2 == 1)
  {
   res *= a;
   res %= m;
  }
  a *= a;
  a %= m;
  b /= 2;
 }
 return res;
}
ll dao(ll a , ll m)
{
 return powMod(a , m - 2 , m);
}
ll X[100001];
void gt()
{
 X[0] = 1;
    for(int i = 1 ; i <= 100001 ; i++)
    {
       X[i] = i * X[i - 1];
        X[i] %= MOD;
   }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t ; cin >> t;
    gt();
    while(t--)
    {
     ll n , k ; cin >> n >> k;
     cout << X[n] % MOD * dao(X[k] * X[n - k] % MOD , MOD) % MOD << endl;
 }
    return 0;
}