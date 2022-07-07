#include <bits/stdc++.h>
using namespace std;
long long D[100005];
long long zero(int n){
    if(D[n])  return D[n];
    if(n==0) return 1;
    long long res=0;
    for(int  a=1;a*a<=n;a++){
        if(n%a==0)  res+=zero((a-1)*(n/a+1));
    }
    return D[n]=res%1000000007;
}
 int main(){    
     int t,n;
     cin>>t;
     while (t--)
     {
        cin>>n;
        cout<<zero(n)<<endl;
     }
 }