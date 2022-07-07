#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
#define ll long long
#define ull unsigned long long
#define endl "\n"
#define x first
#define y second
#include <vector>
//                       Loren_Nam

//http://themis.cscvn.com:5080/problem/tichpxcathinhvuong
int main()
{
 cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 int n,m,TG1,TG2;
 cin>>TG1>>TG2;
// vector< vector <int> > A(501,501);
    
    n=min(TG1,TG2),m=max(TG1,TG2);
    int A[n+1][m+1];
 for(int i=1;i<=m;i++){
 A[1][i]=i;
 }
 for(int i=2;i<=n;i++)
 for(int j=1;j<=m;j++){
 if(j<i){
  A[i][j]=A[j][i];
 }
 else if(j==i){
  A[i][j]=1;
 }
 else{
  A[i][j]=INT_MAX;
  for(int h=1;h<=j/2;h++)
  A[i][j]=min(A[i][j],A[i][j-h]+A[i][h]);
  for(int h=1;h<=i/2;h++)
  A[i][j]=min(A[i][j],A[i-h][j]+A[h][j]);
 }
 }
// for(int i=1;i<=n;i++)
// {
// for(int j=1;j<=m;j++)
// cout<<A[i][j]<<"\t";
// cout<<endl;}
 cout<<A[n][m];
}