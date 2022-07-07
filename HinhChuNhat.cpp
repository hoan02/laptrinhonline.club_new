#include<bits/stdc++.h>
using namespace std;
int main()
{
 long n;
 cin>>n;
 long a,b;
 long s[n+1],p[n+1],flag[n+1]={};
 for(int i=1;i<=n;i++)
 cin>>p[i]>>s[i];
 for(int i=1;i<=n;i++)
 {
 for(int j=1;j<=sqrt(s[i]);j++)
 {
  b=j;
  if(s[i]%b==0)
  {
  a=s[i]/b;
  if((a+b)*2==p[i])
  {
  cout<<b<<" "<<a<<endl;
  flag[i]=1;
     break;
  }}
 }
 if(flag[i]==0)
 cout<<"khong ton tai hinh chu nhat"<<endl;
    }
}