#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 int n;
 cin>>n;
 long a[n+5];
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 sort(a,a+n);
 int mid = (n-1)/2;
 long long s=0;
 for(int i=0;i<n;i++){
  s+=abs(a[mid]-a[i]);
 }
 cout<<s;
}