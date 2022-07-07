#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b)    for(int i = a; i < b; i ++)
//                    J_K.   Pain
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  unsigned long long n, flag;
  cin >> n;
  long long a[n+5];
  cin >> a[0];
  for(ll i = 1; i < n; i ++)
  { 
   cin >> a[i];
   flag = __gcd(a[i],a[i-1]);
   a[i] = (a[i]/flag)*a[i-1];
 }
 cout << a[n-1];
}