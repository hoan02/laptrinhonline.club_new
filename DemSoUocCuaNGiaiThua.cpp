#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;
const int N = 30000;
bool P[N + 5];

int main() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 //freopen("in.txt", "r", stdin);
 for(int i = 2; i * i <= N; ++i) if(!P[i]){
  for(int j = i * i; j <= N; j += i) P[j] = 1;
 }
 vector< int > primes;
 for(int i = 2; i <= N; ++i) if(!P[i]) primes.push_back(i); 

 int n; cin >> n;

 ll ans = 1;
 for(auto x : primes){
  ll d = 0, tmp = n;
  while(tmp > 0){
   d += tmp / x;
   tmp /= x;
  }
  ans = (ans * (d + 1)) % mod;
 }
 cout << ans << '\n';
  return 0;
}