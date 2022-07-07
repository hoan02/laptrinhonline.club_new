#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
// const long M = 1e9+9;
const long M = 1e9+7;

map<ll, ll> F; 
 
ll fib(ll n) {  
    if(F.count(n)) return F[n];  
    ll k=n/2;  
    if(n%2==0){  // n=2*k   
        return F[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1)) % M;  
    }else{ // n=2*k+1   
        return F[n] = (fib(k)*fib(k+1) + fib(k-1)*fib(k)) % M; 
    } 
} 
 
ll power(ll x, ll n){
    ll result = 1;
    while(n){
        if(n&1)
            result = result * x % M;
        n = n / 2;
        x = x * x % M;
    }
    return result;
}

int main(){  
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    F[0]=F[1]=1;
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << (power(2, n) - fib(n+2)+1+M)%M << "\n";
    }
    return 0 ;
}