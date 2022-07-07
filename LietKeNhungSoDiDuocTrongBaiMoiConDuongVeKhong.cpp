#include<bits/stdc++.h>
using namespace std;
int main()
{
 int s=1234,f=0;
 cin>>s;
 stack<int> S;
 S.push(s);
 bool d[s+5]={};
 S.push(s); d[s]=1;
 while(S.size())
 {
  int u=S.top(); S.pop();
  for (int a=1 ; a*a<=u ; a++)
  if(u%a==0)
  {
   int v=(a-1)*(u/a+1);
   if (v>f && d[v]==0) {S.push(v); d[v]=1;}
  }
 }
 cout<<"0 ";
 for (int i=0 ; i<=s ; i++)
 if (d[i])
 cout<<i<<" ";
}