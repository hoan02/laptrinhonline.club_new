#include<bits/stdc++.h>
using namespace std;
int n;
vector<long> res;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 long x;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>x;
  res.push_back(x); 
 }
 sort(res.begin(),res.end());
 int k=1;
 int Max=0;
 long dem;
 for(int i=0;i<n-1;i++){
  if(res[i]==res[i+1]) k++;
  else{
   if(k>Max){
    Max=k;
    dem=i;
   }
   k=1;
  }
 }
 if(Max <= n/2) cout<<"khong co phan tu ap dao";
 else cout<<res[dem];

}