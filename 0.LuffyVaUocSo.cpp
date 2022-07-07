#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);
 int n;
 cin >> n;
 long long c[100003] = {}, j = 1;
 while(j < 100000)
 {
  for(long long i = j; i < 100000; i += j)
  {
   c[i] += j;
  }
  
  j += 2;
 }
 for(long long i = 1; i < 100000; i++)
 {
  c[i] += c[i-1];
 }
 while(n--)
 {
  long long a, b, T = 0;
  cin >> a >> b;
  cout << c[b] - c[a-1] << endl;
 }
  return 0;
}