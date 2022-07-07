#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
ll mod=1e9+7;

ll F[94]={0,1,1};
void sol(ll n,ll i){
 if(n==1) cout<<"A";
 else if(n==2) cout<<"B";
 else if(i<=F[n-2]) sol(n-2,i);
 else sol(n-1,i-F[n-2]);
}

int main(){
 for(int i=3;i<93;i++) F[i]=F[i-1]+F[i-2];
 fastio;
 int t;
 cin>>t;
 while(t--){
  ll n,i;
  cin>>n>>i;
  sol(n,i);
  cout<<endl;
 }

}