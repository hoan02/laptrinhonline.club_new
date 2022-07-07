#include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 cout.tie(NULL);
 deque<int> Q;
// priority_queue<int> Q;
// priority_queue<int ,vector<int> ,greater<int>> L;
 int n,k; cin>>n>>k;
 int a[n+5];
 for(int i =1 ; i<=n ; i++)  cin>>a[i];
 for(int i = 1; i<k ; i++){
  while(Q.size()&&a[Q.back()]<=a[i]){
   Q.pop_back();   
  }Q.push_back(i);
 }
 for(int i =k ; i<= n ;i++){
  while(Q.size()&&a[Q.back()]<=a[i]){
   Q.pop_back();   
  }Q.push_back(i);
  while(i-Q.front()+1>k){
   Q.pop_front();
  }
  cout<<a[Q.front()]<<" ";
 }
 
    return 0;
}