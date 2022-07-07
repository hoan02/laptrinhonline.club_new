#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;
#define fi first
#define se second
void sol(){
 ll n;
 cin >> n;
 ll k = n;
 unordered_map<ll,ll>mp;
 for(int i = 2; i * i <= n;i++){
  while(n % i == 0){
   mp[i]++;
   n /= i;
  }
 }
 ll res = 1;
 for(auto x : mp) res *= pow(x.fi,x.se/2);
 cout << res << ' ' << k / (res * res) << '\n';
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 while(n-->0){
  sol();
 }
  return 0;
}