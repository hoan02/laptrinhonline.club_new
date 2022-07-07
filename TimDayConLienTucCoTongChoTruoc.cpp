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
    ll n, k; cin >> n >> k;
    ll a[n];
    for(ll &x:a) cin >> x;
    ll sum = 0, maxLen = 0;
    unordered_map<ll,ll> unMap;
    for(int i = 0; i < n; i++)
    {
     sum += a[i];
     if(sum == k) maxLen = i + 1;
     if(unMap.find(sum) == unMap.end()) unMap[sum] = i;
     if(unMap.find(sum - k) != unMap.end()) maxLen = max(maxLen,i - unMap[sum - k]);
 }
 cout << maxLen;
} 

int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sol();
}