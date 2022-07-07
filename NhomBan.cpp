#include<bits/stdc++.h>
using namespace std;
const int maxn = 100001;
int n,m,res, root[maxn];
int kt[maxn];
int findroot(int a){
 if(root[a]!=a) root[a]=findroot(root[a]);
 return root[a];
}
bool unionn ( int a,int b){
 a = findroot(a);
 b = findroot(b);
 if(a == b)return false;
 if(a>b) root[a]=b;
 else root[b]=a;
 return true;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int count=0;
 cin>>n>>m;
 for(int i= 1;i<=n;i++)
 {
  root[i] = i;
 } 
 for(int i=0;i<m;i++){
  int u,v,ur,uv;
  cin>>u>>v;
  unionn(u, v);
 }
 for(int i=1;i<=n;i++){
     root[i]=findroot(i);
     //cout << root[i] << " ";
  kt[root[i]]++;
  res=max(res,kt[root[i]]);
  if(root[i]==i) count++;
 }
 cout<<count<<endl<<res;
}