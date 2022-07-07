#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second

int minSort(vector<pair<int, int>> &X) {
 int cnt=0, n=X.size();
 for(int i=0; i<n; i++) {
  if(X[i].se!=i) {
   swap(X[i].fi, X[X[i].se].fi);
   swap(X[i].se, X[X[i].se].se);
   if(X[i].se!=i) i--;
   cnt++;
  }
 }
 return cnt;
}

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, x;
 cin >> n;
 vector<pair<int, int>> pii(n), r_pii(n);
 for(int i=0; i<n; i++) {
  cin >> x;
  pii[i]= {x, i};
 }
 sort(pii.begin(), pii.end());
 reverse_copy(pii.begin(), pii.end(), r_pii.begin());
 cout << min(minSort(pii), minSort(r_pii));
 return 0;
}