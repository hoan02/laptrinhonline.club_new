#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
int i,j;

void mul(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c[a.size()+b.size()]={},nho=0,len=0;
    for (i=0;i<b.size();i++)
    {
        int cnt=i;
        for (j=0;j<a.size();j++)
        {
            int x = (b[i]-'0') * (a[j]-'0') + nho + c[i+j];
            nho = x/10;
            c[cnt++] = (x%10);
        }
        if (nho>0) c[cnt++] = nho;
        nho=0;
        len=max(len,cnt-1);
    }
    for (i=len;i>=0;i--) cout << c[i];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string a,b;
    cin >> a >> b;
    mul(a,b);
    
    return 0;
}