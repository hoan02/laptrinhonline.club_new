#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL MOD=1e9+7;
LL squaresum(int n)
{
 LL x=n,y=n+1,z=2*n+1;
 n%2?y=y/2:x=x/2;
 if(x%3==0) x/=3;
 else if(y%3==0) y/=3;
 else z/=3;
 x%=MOD;
 y%=MOD;
 z%=MOD;
 return x*y%MOD*z%MOD;
}
void sol() {
 LL m,n,k;
 cin>>m;
 n=floor(sqrt(m));
 k=floor(sqrt(m/9));
 LL res=squaresum(n)-9*squaresum(k);
 cout<<(res%MOD+MOD)%MOD<<"\n";
}
int main() {
 int test;
 cin>>test; while(test--) sol();
}