#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 int a, b, c; cin >> a >> b >> c;
    if(a == b || a == c || b == c || a + b == c || b + c == a || a + c == b)
       cout << "S";
    else cout << "N";
}