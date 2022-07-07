#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 long long a[100005]={},n,x;
 cin>>n;
 while(n--)
 {
  cin>>x;
  a[x]++;
 }
 long long s=0;
 for(int i=0;i<=1e5;i++) s+=a[i]*(a[i]-1)/2;
 cout << s;
 return 0;
}