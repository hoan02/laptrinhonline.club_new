#include<bits/stdc++.h>

#define endl "\n"

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
    int n; cin >> n;
    int x,y;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            {
             cin >> a[i][j];
             if(a[i][j] == 1)
             {
              x = i;
              y = j;
    }
   }
    if(n % 2 == 0) cout << -1 ;
    else
    {
     int demHang, demCot;
     if(x == n / 2) demHang = 0;
     else demHang = abs( n / 2 - x);
     if(y == n / 2) demCot = 0;
     else demCot = abs( n / 2 - y);
     cout << demHang + demCot;
 }
        
}