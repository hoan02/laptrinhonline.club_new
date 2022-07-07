#include<bits/stdc++.h>
using namespace std;
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int n,x,res=0;
 cin>>n;
 int a[n];
 x=n-1;
 for(int i=0;i<n;i++) cin>>a[i];
 sort(a,a+n);
 for(int i=0;i<n;i++){
  if(a[i]<x) res+=a[i],x-=a[i]+1;
  else {
   res+=x;
   break;
  }
 }
 cout<<res;
}