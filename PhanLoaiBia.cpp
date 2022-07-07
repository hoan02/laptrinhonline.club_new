#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

void sol()
{
 int n; cin >> n;
 vector<pair<float, float>> vc;
 vector<int> LIS(n,1);
 for(int i = 0; i < n; i++)
 {
  float x, y; cin >> x >> y;
  vc.push_back({x,y});
 }
 for(int i = 0; i < n;i ++)
  for(int j = 0; j < i; j++)
   if(vc[i].fi > vc[j].fi && vc[i].se < vc[j].se) LIS[i] = max(LIS[i], LIS[j] + 1);
  cout << *max_element(LIS.begin(),LIS.end()) << endl ;
}

int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
     sol();
 }
    
}