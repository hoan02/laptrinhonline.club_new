#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int a[n+5]={};
 pair<int,int> M[n+5]={};
 for(int i=1;i<=n;i++){
  scanf("%d",&a[i]);
  M[i].first=a[i];
  M[i].second=i;
 }
 sort(M+1,M+n+1);
 int dem=0;
 for(int i=1;i<=n;i++){
  if(a[M[i].second]!=0){
   a[M[i].second-1]=0;
   a[M[i].second+1]=0;
   dem++;
  }
 }
 cout<<dem;
// for(int i=1;i<=n;i++) cout<<M[i].first<<" "<<M[i].second;
}