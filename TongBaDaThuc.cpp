#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 vector<double> P;
 double z;
 cin>>n; P.resize(n+1,0); for(int i=0;i<=n;i++) cin>>P[i];
 cin>>n; if(n+1>P.size()) P.resize(n+1,0);  for(int i=0;i<=n;i++) {cin>>z; P[i]+=z;}
 cin>>n; if(n+1>P.size()) P.resize(n+1,0);  for(int i=0;i<=n;i++) {cin>>z; P[i]+=z;}
 while(P.size()>1 && P.back()==0) P.pop_back();
 for(auto p:P) cout<<setprecision(2)<<fixed<<p<<" ";
}