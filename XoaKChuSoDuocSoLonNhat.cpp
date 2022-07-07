#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
 //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 string s; cin >> s;
 int t; cin >> t;
 while(t--)
 {
  int q; cin >> q;
  stack<char> st;
  st.push(s[0]);int idx = 0;
  for(int i = 1; i < s.size(); ++i)
  {
   if(s[i] <= st.top())
   {
    st.push(s[i]);
   }
   bool ok = false;
   while(!st.empty() && q > 0 && s[i] > st.top())
   {
    st.pop();
    ok = true;
    --q;
   }
   if(ok) st.push(s[i]);
   if(q == 0)
   {
    idx = i;
    break;
   }
  }
  string res = "";
  if(q == 0) res = s.substr(idx + 1, s.size() - (idx + 1) + 1);
  while(!st.empty() && q > 0)
  {
   st.pop();
   q--;
  }
  string tmp = "";
  while(!st.empty())
  {
   tmp += string(1, st.top());
   st.pop();
  }
  reverse(tmp.begin(), tmp.end());
  cout << tmp << res << endl;
 }
 return 0;
}