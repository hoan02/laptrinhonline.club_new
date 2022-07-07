#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
 int n, k;
 cin >> n >> k;
 vector<ll> am, duong;
 for (int i=0; i<n; i++)
 {
  ll tmp;
  cin >> tmp;
  if(tmp>=0)
   duong.push_back(tmp);
  else
   am.push_back(-tmp);
 }
 am.push_back(0);
 duong.push_back(0);
 sort(am.begin(), am.end());
 sort(duong.begin(), duong.end());
 ll res = 999999999;
 for (int i=0; i<=k; i++)
 {
  if (i<duong.size() && k-i<am.size())
  {
   ll quangDuong;
   quangDuong = min(2*duong[i] + am[k-i],duong[i] + 2*am[k-i]);
   if (quangDuong<res)
    res = quangDuong;
  }
 }
 cout << res;
}