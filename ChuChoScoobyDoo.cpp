#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int a[n];
 for(auto &x : a) cin >> x;
 ll res = 0;
 for(int i = 0; i < n-1; i++){
  
  if(a[i+1] == 1 && a[i+2] == 1){
   cout << "khong qua duoc suoi";
   return 0;
  }
 
  if(a[i+2] == 0){
   i++;
  }
  res++;
  
 }
 cout << res;
  return 0;
}