#include <bits/stdc++.h>  
using namespace std; 

int main()  
{  
 ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
 int n,sum=0; cin>>n;
 vector<int> v(n+1);
 v[0]=0;
 for(int i=1;i<=n;i++){
  int a; cin>>a;
  v[i]=v[i-1]+a;
  sum+=a;
 }
 for(int i=1;i<n;i++){
  if(sum%v[i]==0){
   int x =2;
   for(int j=i+1;j<n;j++){
    if(v[j] > v[i]*x) break;
    else if(v[j]==v[i]*x) x++;
    if(v[i]*x==sum) {
     cout<<v[i];
     return 0;
    }
   }
  }
 }
 cout<<sum;
}