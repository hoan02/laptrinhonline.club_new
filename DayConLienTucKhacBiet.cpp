#include<bits/stdc++.h>
using namespace std;
int main()
{
 map<int,int> M;
 int n,x,L=0,res=0;
 cin>>n;
 for(int R=1;R<=n;R++)
 {
  cin>>x;
  if(M.find(x)!=M.end() && M[x]>=L) L=M[x];
  if(R-L>res) res=R-L;
  M[x]=R;
 }
 cout<<res;
}