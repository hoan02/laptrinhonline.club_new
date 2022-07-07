//giai thua
#include<bits/stdc++.h>
using namespace std;
#define M 1000
int main()
{
 long long n,nho;
 cin>>n;
 vector<int> A(1,1);
 for(int i=2;i<=n;i++)
 {
  nho=0;
  for(auto &x:A)
  {
   nho+=x*i;
   x=nho%M;
   nho/=M;
  }
  while(nho) {A.push_back(nho%M);nho/=M;}
 }
 //for(auto it=A.rbegin();it!=A.rend();it++) cout<<*it;
// printf("%d",A.back()); A.pop_back();
// for(auto it=A.rbegin();it!=A.rend();it++) printf("%0.3d",*it); //cout<<setprecision(0.3)<<*it;
 cout<<A.back(); A.pop_back();
 for(auto it=A.rbegin();it!=A.rend();it++) cout<<setw(3)<<setfill('0')<<*it;
}