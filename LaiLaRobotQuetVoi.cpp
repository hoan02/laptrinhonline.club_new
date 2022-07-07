#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;
#define fi first
#define se second

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,m;
 cin >> n >> m;
 int d[m+1] = {};
 int a,b;
 while(n--){
  cin >> a >> b;
  d[a]++;
  d[b]--;
 }
 ll res = 0;
 ll S = 0;
 for(int i = 0; i < m;i++){
  S += d[i];
  if(!S) res++;
 }
  cout << res;
  return 0;
}