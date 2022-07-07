#include<bits/stdc++.h>
using namespace std;

int main()
{
 //priority_queue<int> Q;
 // neu muon uu tien tu be den lon
 // priority_queue<int,vector<int>,greater<int>>Q;
 //thay greater bang less thi la tu lon den be.
 priority_queue<int>Q;
 vector<int> A[10006];
 int n,t,v;
 cin>>n;
 while(n--)
 {
  cin>>t>>v;
  A[t].push_back(v);
 }
 long long res =0;
 for(int i=1000;i>0;i--)
 {
  for(auto x:A[i]) Q.push(x);
  if(Q.size())
  {
   res+=Q.top();
   Q.pop();
  }
 }
 cout<<res;
}