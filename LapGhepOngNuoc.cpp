#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,x,i=0,k;
 cin >> n >> k;
 long s=0,a=0;
 priority_queue<int, vector<int>, greater<int>>q;
 while( i<n){
  scanf("%d",&x);
  q.push(x);
  i++;
 }
 while(q.size()>=k){
  for( i=0;i<k;i++){
   a+=q.top();
   q.pop();
  }
  if(q.size()>0)
   q.push(a);
  s+=a;
  a=0;
 }
 while(q.size()<k && q.size()>=1){
  s+=q.top();
  q.pop();
 }
 cout << s;
 
}