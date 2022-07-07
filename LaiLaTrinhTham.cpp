#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int,ii> pii;
typedef pair<double,double>dd;
#define fi first
#define se second
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n,k,t;
 priority_queue<ii> Q;
 cin >> n >> k;
 for(int i = 1; i < k;i++){
  cin >> t;
  Q.push({t,i});
 }
 for(int i = k; i <= n; i++){
  cin >> t;
  Q.push({t,i});
  while(Q.top().se <= i - k) Q.pop();
  cout << Q.top().fi << ' ';
 }
  return 0;
}