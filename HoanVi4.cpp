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
#define debug(x) cout << #x << " is " << x << endl;

int n, a[100], d=0;
bool uns[100];

void in(){
 for (int i=1; i<n; ++i)
  if ((a[i]+a[i+1])%4==0) return;
 d++; 
 for (int i=1; i<=n; ++i)
  cout << a[i] << " ";
 cout << endl;
}

void hoanvi(int j){
 for (int i=1; i<=n; ++i)
  if (uns[i]==true){
   a[j]=i;
   uns[i]=false;
   if (j==n) in();
   else hoanvi(j+1);
   uns[i]=true;
  }
}
 
 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cin >> n;
 for (int i=1; i<=n; ++i)
  uns[i] = 1;
 hoanvi(1);
 cout << d;
 return 0;
}