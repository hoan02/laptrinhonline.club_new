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
ll dig(ll n){
  ll d = 0;
  while (n){
    d++;
    n /= 10;
  }
  return d;
}

ll sol(ll n, ll d, ll x, ll flag) {
  if (!n && flag)
    return 0;
  if (!d)
    return 1;
  ll digit, f = 1, allowed_digits = 0, s, t = 0;
  ll i;
  for (i = 0; i < d - 1; i++)
    f *= 10;
  digit = n / f;
  n -= digit * f;
  for (i = 0; i < 10; i++)
    if (!((x >> i) & 1))
      allowed_digits++;
  for (i = 0; i < digit; i++)
    if (!((x >> i) & 1))
      t++;
  s = t - flag;
  allowed_digits--;
  for (i = 1; i < d; i++) {
    s *= allowed_digits;
    allowed_digits--;
  }
  t = 0;
  if (!((x >> digit) & 1))
    t = sol(n, d - 1, x | (1 << digit), 0);
  return s + t;
}
int main (){
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    ll t;
   ll a,b,digit_a,digit_b;
   ll f = 1;
   ll A[20],i;
   A[0] = 0;
   for(i = 1;i <= 18;i++) {
     f *= 10;
     A[i] = sol(f-1,i,0,1);
     A[i] += A[i-1];
   }
   scanf("%lld",&t);
   while(t--) {
     scanf("%lld%lld",&a,&b);
     a--;
     digit_a = dig(a);
     digit_b = dig(b);
     ll sum = A[digit_b - 1 < 0 ? 0 : digit_b - 1] + sol(b, digit_b, 0, 1) - A[digit_a - 1 < 0 ? 0 : digit_a - 1] - sol(a, digit_a, 0, 1);
     if (a + 1 == 0) sum++;
     printf("%lld\n", sum);
   }
 return 0; 
}