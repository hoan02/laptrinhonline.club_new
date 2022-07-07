#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
//                       Loren_Nam

int main()
{
 cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 priority_queue<int,vector<int>,greater<int>> B;
 string x;
 cin>>x;
 int A['z'+1]={0};
 for(int i=0;i<x.length();i++)
 A[x[i]]++;
 for(int i=x.length()-1;i>=0;i--)
 if( A[x[i]]!=0 )
 {
 B.push(A[x[i]]);
 A[x[i]]=0;
    }
    long long s,max=0;
 while(B.size()>1)
 {
  int u=B.top();
  B.pop();
  int v=B.top();
  B.pop();
  s=u+v;
  B.push(s);
  max+=s;
 }
 cout<<max;
}