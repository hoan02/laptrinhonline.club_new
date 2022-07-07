#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef unordered_map<int,int> umii;
typedef unordered_map<ll,ll> umll;
#define mod 1e9+7
#define c 100005

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n, x;
 cin >> n >> x;
 int a[c];
 for (int i=0; i<n; ++i)
  cin >> a[i];
 int d=0, sum=0, k=n;
 sort(a,a+n,greater<int>());
 for (int i=0; i<n; ++i)
  sum+=a[i]; 
 for (int i=0; i<n; ++i){
  if (a[d]-a[i]>=x) {
   sum-=a[i];
   d++;
   k--; 
  }
 }
 cout << k << " " << sum; 
 return 0;
}