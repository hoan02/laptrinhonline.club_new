#include<bits/stdc++.h>
using namespace std;
class gao
{
 int x[15],res=INT_MAX;
 void TRY(int k,int a,int A,int b,int B,int c,int C)
 {
  if(k==9)
  {
   int kq =max({A,B,C})-min({A,B,C}); if(res>kq) res =kq;
  }
  else
  {
   if(a>0) TRY(k+1,a-1,A+x[k+1],b,B,c,C);
   if(b>0) TRY(k+1,a,A,b-1,B+x[k+1],c,C);
   if(c>0) TRY(k+1,a,A,b,B,c-1,C+x[k+1]);
  }
 }
 public:void sol()
 {
  for(int i=1;i<=9;i++)
  cin>>x[i];
  TRY(0,3,0,3,0,3,0);
  cout<<res;
 }
};
int main()
{
 gao G;G.sol();
}