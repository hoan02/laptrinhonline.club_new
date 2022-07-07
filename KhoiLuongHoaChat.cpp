#include<bits/stdc++.h>
using namespace std;
map<char,int> K={{'C',12},{'H',1},{'O',16},{'(',0}};
int main()
{
 int n;cin>>n;
 while(n--) {
  stack<int> S;
  string e;
  cin>>e;
  for(char c:e)
  if(K.find(c)!=K.end()) S.push(K[c]); 
  else if(c==')')
  {
   int t=0;
   while(S.top()!=0) {t+=S.top(); S.pop();}
   S.top()=t;
  }
  else S.top()*=c-'0';
  int t=0;
  while(S.size()) {t+=S.top(); S.pop();}
  cout<<t<<endl;
 }
 
}