#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long n,a,b;
    cin >> n >> a >> b ;
    int L[n+5];
    fill(L,L+n+5,0);
    L[0]=1;
    for (long i=1;i<=n;i++)
    {
        if (i-a>=0) L[i]+=L[i-a];
        if (i-b>=0) L[i]+=L[i-b];
        L[i]%=mod;
    }
    if (n==0) cout << 0;
    else cout << L[n];
    return 0;
}