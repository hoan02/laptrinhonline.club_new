#include<bits/stdc++.h>
using namespace std;
struct DULICH
{
  int n, a[30][10], x[100], d[100] = {}, res = INT_MAX, cmin = res;
  void sol()
{
   cin >> n;
   for(int i = 1; i <= n; i++)
   {
    for(int j = 1; j <= n; j++)
    {
     cin >> a[i][j];
     if(i != j && cmin > a[i][j]) cmin = a[i][j];
    }
   }

   x[1] = 1; d[1] = 1;
   TRY(1, 0);
   cout << res;
  }

  void TRY(int k, int T)
  {
   if(k == n)
   {
    res = min(res, T + a[x[n]][1]);
   } else
   {
    for(int z = 1; z <= n; z++)
    {
     if(d[z] == 0 && T + a[x[k]][z] + (n - k) * cmin < res)
     {
      x[k + 1] = z;
      d[z] = 1;
      TRY(k + 1, T + a[x[k]][z]);
      d[z] = 0;
     }
    }
   }
  }
};

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  DULICH a;
  a.sol();
}