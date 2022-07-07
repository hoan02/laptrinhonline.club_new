#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const ll mod = 1e9 + 7;
const int N = 100005;
inline ll gcd(ll a, ll b){ll r; while(b){r = a%b; a = b; b = r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a, b)*b;}

ll du(ll a, ll b)
{
 ll res = 1;
 while(b)
 {
  if (b % 2)
  {
   res *= a;
   res %= mod;
  }
  a *= a;
  a %= mod;
  b /= 2;
 }
 return res;
}

bool ok[1005][1005] = {};
int m, n, res = -1;
int a1, b1, a2, b2;
int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void BFS()
{
 queue<pair<pi, int>> q;
 q.push({{a1, b1}, 0});
 ok[a1][b1] = true;
 while(q.size())
 {
  pi x = q.front().fi;
  int y = q.front().se;
  q.pop();
  for (int i = 0; i < 8; i++)
  {
   int i1 = x.fi + dx[i];
   int j1 = x.se + dy[i];
   if (i1 >= 0 && j1 >= 0 && i1 < m && j1 < n && !ok[i1][j1]) 
   {
//    cout << i1 << " " << j1 << " " << y + 1 << endl;
    if (i1 == a2 && j1 == b2) 
    {
     cout << y + 1;
     return;
    }
    ok[i1][j1] = true;
    q.push({{i1, j1}, y + 1});
   }
  }
 }
 cout << -1;
}

void solve()
{
 cin >> m >> n;
 cin >> a1 >> b1 >> a2 >> b2;
 BFS();
}

int main() {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int test = 1;
// cin >> test;
 for (int i = 1; i <= test; i++) solve();
 return 0;
}