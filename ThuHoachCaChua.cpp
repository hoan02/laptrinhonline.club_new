#include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 cout.tie(NULL);
 int n,k,x; cin>>n>>k;
 priority_queue<int> Q;
 while(n--){
  cin>>x;
  Q.push(x);
 }
 int h=k;
 int res=Q.top();  Q.pop();
 while(Q.top()>=k&&Q.size()){
  res+=Q.top()-k; Q.pop();
  k+=h;
 }
 cout<<res;
 
 
    return 0;
}