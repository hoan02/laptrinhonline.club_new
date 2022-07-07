#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const long long mod=1e9+7;
typedef unsigned long long ull;
typedef long long ll;

int cmpfunc(const void *a,const void *b){
 return (*(int *)a-*(int *)b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x,n;
        cin >> x >> n;
        if (n==0) continue;
        long a[n+5],sum;
        a[0]=0;
        for (int j=1;j<=n;j++)
        {
            cin >> a[j];
            a[j]+=a[j-1];
        }
        sum=a[n];
        for (int j=1;j<=n;j++)
        {
            long k=1;
            if (sum % a[j]==0 ) 
            {
                for (int i=j+1;i<=n;i++)
                {
                    if (a[j]>a[i]*k) break;
                    if (a[i] % a[j] == 0) k++;
                }
            }
            if (a[j] * k ==sum) 
            {
                cout << x << " " << a[j] << "\n";
                break;
            }
        }
    }
    return 0;
}