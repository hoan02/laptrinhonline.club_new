#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,res=1e10;

void Try(ll SMM)
{
    if (SMM > 1e10) return;
    if (SMM>=n)
    {
        int cnt=0;
        ll tmp=SMM;
        while (tmp)
        {
            if (tmp % 10 == 4) cnt++;
            else cnt--;
            tmp/=10;
        }
        if (cnt == 0) 
        {
            res=min(res,SMM);
            return;
        }
    }
    Try(SMM*10+4);
    Try(SMM*10+7);
}

int main()
{
    //QUay lui
    cin >> n;
    Try(0);
    cout << res;
    return 0;
}