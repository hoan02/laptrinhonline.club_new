#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll const MOD = 1e9+7;

ll power(ll x, ll n){
    ll result = 1;
    while(n){
        if(n&1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}

// ll power(ll a,ll n){
//  if(n==0) return 1;
//  if(n%2==0) return power(a*a%MOD,n/2);
//  return a*power(a*a%MOD,n/2)%MOD;
// }

ll modInverse(ll n){
    return power(n, MOD - 2);
}

ll F[100005];
void setMap(){
 F[0] = 1;
    for(ll i=1;i<=1e5;i++){
       F[i] = i * F[i-1];
        F[i] %= MOD;
   }
}
 
int main(){
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test, n, k;
    cin >> test;
    setMap();
    while(test--){
     cin >> n >> k;
     cout << F[n] % MOD * modInverse(F[k] * F[n-k] % MOD) % MOD << "\n";
 }
    return 0;
}