#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;
int a[] = {0,1,2,5};
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 queue<ll> Q;
 for(int i = 1; i < 4;i++) Q.push(a[i]);
 bool check = false;
 while(Q.front() < 999999999){
  ll u = Q.front();
  Q.pop();
  if(u % n == 0) cout << u << '\n';
  if(!check)
  for(auto x : a){
   if(u*10+x > 999999999 ){
    check = true;
   }
   Q.push(u*10+x);
  } 
  
 }
  return 0;
}