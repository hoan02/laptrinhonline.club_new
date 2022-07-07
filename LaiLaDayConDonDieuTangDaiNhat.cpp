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
 int n,t;
 cin >> n;
 vector<int>vt;
 while(n--){
  cin >> t;
  if(vt.empty() || vt.back() < t) vt.push_back(t);
  *lower_bound(vt.begin(),vt.end(),t) = t;
 }
 cout << vt.size();
  return 0;
}