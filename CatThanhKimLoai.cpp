#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

const ll mod = 1e9 + 7;
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

void solve()
{
 int n, m, st, en;
 cin >> n >> m;
 int a[n], dem[m + 1] = {};
 bool mark[m + 1] = {};
 priority_queue<int> pq;
 for(int i = 0; i < n; i++) cin >> a[i];
 mark[0] = mark[a[0]] = mark[m] = true;
 dem[a[0]]++;
 dem[m - a[0]]++;
 pq.push(a[0]);
 pq.push(m - a[0]);
 cout << pq.top() << " ";
 for (int i = 1; i < n; i++)
 {
  if (mark[a[i]]) 
  {
   cout << pq.top() << " ";
   continue;
  }
  mark[a[i]] = true;
  for (int j = a[i] - 1; j >= 0; j--) 
   if (mark[j])
   {
    st = a[i] - j;
    break;
   }
  for (int j = a[i] + 1; j <= m; j++) 
   if (mark[j])
   {
    en = j - a[i];
    break;
   }
  dem[en + st]--;
  dem[st]++;
  dem[en]++;
  pq.push(st);
  pq.push(en);
  while(dem[pq.top()] <= 0) pq.pop();
  cout << pq.top() << " ";
 }
}

int main() {
 ios::sync_with_stdio(0); cin.tie(); cout.tie();
 int test = 1;
 for (int i = 1; i <= test; i++) solve();
 return 0;
}