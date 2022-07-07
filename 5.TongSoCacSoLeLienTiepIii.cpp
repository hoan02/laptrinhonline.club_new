#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a,_b=b;i<=_b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b,_a=a;i>=_a;i--)
#define ford(i,n) FORD(i,n-1,0)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;


int main(){
 //freopen("test_00.in", "r", stdin);
 
 int t, x, y;
 cin >> t;
 while(t--){
  cin >> x >> y;
  x = x % 2 ? x : x + 1;
  int sum = x;
  while(y--) sum += x += 2;
  print(sum - x);
 }
 
 return 0;
}