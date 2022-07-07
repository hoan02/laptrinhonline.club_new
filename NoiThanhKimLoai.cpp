#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 long long kq=0;
 int n,t;
 cin>>n;
 priority_queue<int,vector<int>,greater<int>> v;
 for(int i=0;i<n;i++){
  cin>>t;
  v.push(t);
 }
 while(v.size()>=2){
  int a = v.top();
  v.pop();
  int b = v.top();
  v.pop();
  kq+=a+b;
  v.push(a+b);
 }
 cout<<kq;
}