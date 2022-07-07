#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define ll long long

int main(){
 
 ll x, y;
 cin >> x >> y;
 
 
 ll cnt = 0;
 for(ll i = 2; i <= y; i++){
  ll t = x/(i+1); // so cap x = i*t + t
  if (t >= i) cnt += i-1;
  else cnt += t;
 }
 
 cout << cnt;
 
 
 return 0;
}