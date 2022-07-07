#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int tt, int *a, int n, int k){
 pair<ll, ll>b[n+5];
 for(int i=0;i<n;i++) b[i] = make_pair((ll)i*(ll)tt-(ll)a[i], (ll)i*(ll)tt+(ll)a[i]);
 sort(b, b+n);
 vector<ll>v;
 for(int i=0;i<n;i++){
  int x = upper_bound(v.begin(), v.end(), b[i].second) - v.begin();
  if(x==v.size()) v.push_back(b[i].second);
        else v[x] = b[i].second;
 }
 return v.size()>=(n-k);
}

void sol(){
    int n, k, ans;
    cin >> n >> k;
    int a[n+5];
    for(int i=0;i<n;i++) cin >> a[i];
    if(n<=1 || abs(n-k)<=1) {cout << "0\n"; return;}
    ll l=0, r=2e9;
    while(l<=r){
        int m = int((l+r)>>1ll);
        if(check(m, a, n, k)){
            ans = m;
            r = m-1;
        }
        else l = m+1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int t;
    cin >> t;
    while(t--) sol();
 return 0;
}