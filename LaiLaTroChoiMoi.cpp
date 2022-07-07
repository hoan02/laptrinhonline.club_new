#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const unsigned long long mod=1e9+7;
typedef unsigned long long ull;
typedef long long ll;

int cmpfunc(const void *a,const void *b){
 return (*(int *)a-*(int *)b);
}

ull pow_mod(ull a,ull b)
{
    ull res=1;
    a%=mod;
    while (b)
    {
        if (b&1) res=res*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n,y=0;
    cin >> n;
    vector<long>v;
    long sum=0,res=LONG_MIN,pos1=1,pos2;
    for (long i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        y+=x;
        if (x==1) sum-=1;
        else sum+=1;
        if (res<sum)
        {
            res=sum;
            pos2=i;
        }
        if (sum<=0) 
        {
            sum=0;
            v.push_back(i);
        }
    }
    if (res<0) res=0;
    for (long i=0;i<v.size();i++)
    {
        if (v[i]<=pos2)
        {
            pos1=v[i];
        }
        else break;
    }
    if (y==n) cout << y-1;
    else cout << res+y;
    return 0;
}