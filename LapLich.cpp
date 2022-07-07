#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int n,res =0,t=0; cin >> n;
 pair<int,int> A[n];
 for(auto &x:A) cin >> x.second >> x.first;
 sort(A,A+n);
 for(auto x:A){
  if(x.second > t){
   res++;
   t = x.first;
  }
 }
 cout << res;
 return 0;
}