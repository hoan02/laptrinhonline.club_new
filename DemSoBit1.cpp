using namespace std;
#include<bits/stdc++.h>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define add push_back
#define endl '\n'
#define ll long long

unordered_map< ll, ll > mp;

ll get(ll x){
 ll cnt = -1;
 while(x){
  x /= 2;
  ++cnt;
 }
 return cnt;
}

ll solve(ll n){
 if(n == 0 || n == -1) return 0;
 ll k = get(n);
 if(n == ((1LL << k) - 1)){
  if(mp.count(n)) return mp[n];
  //return mp[n] = (k * (n + 1)) >> 1;
  return mp[n] = n / 2 + 2 * solve(n / 2);
 }
 ll m = (1LL << k) - 1;
 if(m <= n){
  if(!mp.count(m)) mp[m] = solve(m);
  if(!mp.count(n - m - 1)) mp[n - m - 1] = solve(n - m - 1);
  return mp[m] + mp[n - m - 1] + (n - m);
 }
 return 0;
}


int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 ll n; cin >> n;
 cout << solve(n);
 return 0;
}