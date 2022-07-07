using namespace std;
#include<bits/stdc++.h>
#define ll long long

int a[1000006];

int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int n, x; cin >> n;
 vector< int > v;
 for(int i = 1; i <= n; ++i){
  cin >> x;
  a[i] = a[i - 1] + x;
 }
 for(int i = 1; i <= n; ++i) if(a[i] == a[n] - a[i - 1]) v.push_back(i);
 for(int i = 0; i < v.size(); ++i){
  if(i == v.size() - 1) cout << v[i] << '\n';
  else cout << v[i] << " ";
 }
 cout << v.size() << '\n';
 return 0;
}