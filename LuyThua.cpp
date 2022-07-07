#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
ll mod=1e9+7;

ll powMod(ll a,ll n){
 if(n==0) return 1;
 else if(n%2==0) return powMod(a*a%mod,n/2);
 else return (powMod(a*a%mod,n/2)*a)%mod;
}
 
int main(){
 fastio;
 string u,v;
 cin>>u>>v;
 ll a=0,b=0;
 for(char x:u){
  a=(a*10 + x-'0')%mod;
 } 
 for(char x:v){
  b=(b*10+ x-'0')%(mod-1);
 }
 ll res=powMod(a,b);
 cout<<res%mod;
}