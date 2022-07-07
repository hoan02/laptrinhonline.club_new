#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int main()
{
 int t;cin>>t;
 while(t--)
 {
  int k;string s;
  cin>>k>>s;
  for(char c:s) cout<<string(k,c);
  cout<<endl;
 }
}