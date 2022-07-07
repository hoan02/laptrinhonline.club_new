#include<bits/stdc++.h>

#define endl "\n"
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
     string a,b;
     cin >> a >> b;
     reverse(a.begin(),a.end());
     reverse(b.begin(),b.end());
     int tmp = stoll(a);
     int tmpb = stoll(b);
     int res  = tmp + tmpb;
     string resstr = to_string(res);
     reverse(resstr.begin(),resstr.end());
     res = stoll(resstr);
     cout << res << endl;
  
 }
}