#include<bits/stdc++.h>

using namespace std;
int main() {
 int n,m;cin>>n>>m;
 int a[n];
 for(int i = 0; i < n; ++i)  cin>>a[i];
 int F[n + 1];F[0] = 0;
 for(int i = 0; i < n; ++i) F[i + 1] = F[i] + a[i];
 int T[m];
 for(int i = 0; i < m; ++i) {
  int x,y;cin>>x>>y;
  T[i] = F[y] - F[x - 1];
 }
 sort(T,T + m,greater<int>());
 int sum = 0;
 for(int i = 0; i < m; ++i) {
  if(T[i] >= 0) sum += T[i];
  else break;
 }
 cout<<sum;
}