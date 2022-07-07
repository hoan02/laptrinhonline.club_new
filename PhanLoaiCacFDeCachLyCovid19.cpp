# include<bits/stdc++.h>
using namespace std;
int main(){
 //freopen("in.txt","r",stdin);
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
    int n,m,u,v;;
    cin>>n>>m;
    vector<int>A[n+5];
    int F[n+5]={};
    int d[n+5];
    fill(d,d+n+1,-1);
    for(int i=1;i<=m;i++)
    {
     cin>>u>>v;
     A[u].push_back(v);A[v].push_back(u);
     
 }
 queue<int>Q;
 cin>>F[0];
 for(int i=1;i<=F[0];i++) {
  int x;
  cin>>x;
  Q.push(x);
  d[x]=0;
 }
 while(!Q.empty()){
  int u=Q.front();Q.pop();
  for(int v:A[u]){
   if(d[v]==-1){
    d[v]=d[u]+1;
    F[d[v]]++;
    Q.push(v);
   }
  }
 }
 for(int i=0;F[i];i++)
 cout<<"F"<<i<<": "<<F[i]<<endl;
}