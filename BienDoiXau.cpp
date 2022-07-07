#include <bits/stdc++.h>
using namespace std;
#define min3(a, b, c) min(a, min(b, c));
int main()
{
 string s, v;
 cin>>s>>v;
 int n = s.length(), m = v.length();
 int b[n+1][m+1];
 for(int i=0;i<=n;i++) b[i][0] = i;
 for(int i=0;i<=m;i++) b[0][i] = i;
 for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) {
  if(s[i-1]==v[j-1]) b[i][j] = b[i-1][j-1];
  else {
   b[i][j] = 1+ min3(b[i-1][j], b[i][j-1], b[i-1][j-1]);
  }
 }
 cout<<b[n][m];
}