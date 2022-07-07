#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 int L[101]={},R[101]={},res=0;
 while(n--){
  char x;
  int y;
  cin>>x>>y;
  x=='R'?R[y]++:L[y]++;
 }
 for(int i=0;i<101;i++) res+=min(R[i],L[i]);
 cout<<res;
}