#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int n, k, m, s, f;
int cnt = 0;
int bfs()
{
 map<int, int> mp;
 queue<pair<int, int>> q;
 q.push({s, 0});
 while(!q.empty())
 {
  pi tmp = q.front(); q.pop();
  if(tmp.fi == f) return tmp.se; 
  if(tmp.fi < f && mp[tmp.fi + k] == 0)
  {
   q.push({tmp.fi + k, tmp.se + 1}); 
   mp[tmp.fi +k] = 1;
  }
  if(mp[tmp.fi - m] == 0 && tmp.fi > m)
  {
   mp[tmp.fi - m] = 1;
   q.push({tmp.fi - m, tmp.se + 1});
  }
 }
 return -1;
}
int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--)
    {
     cnt = 0;
     cin >> n >> k >> m >> s >> f;
     cout << bfs() <<'\n';
 }
 return 0;
}