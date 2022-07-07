#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;
#define fi first
#define se second
unordered_map<string,int>D;
void sol(){
 priority_queue<int>Q1;
 priority_queue<int,vector<int>,greater<int>>Q2;
 int n,t;
 cin >> n;
 for(int i =1 ; i <= n;i++){
  cin >> t;
  if(i % 2) Q1.push(t);
  else Q2.push(t);
  if(!Q2.empty())
  if(Q1.top() > Q2.top()){
   int u = Q1.top();
   int v = Q2.top();
   Q1.pop();
   Q2.pop();
   Q1.push(v);
   Q2.push(u);
  }
  cout << Q1.top() << ' ';
 }
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t = 1;

 while(t-->0){
  sol();
 }
 
  return 0;
}