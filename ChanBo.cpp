#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_cin;

    map <float, int> m1, m2, m3, m4;
    int n, x, y;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        if(x>=0 && y>=0) m1[x*1.0/y]++;
        else if(x<=0 && y>=0) m2[x*1.0/y]++;
        else if(x<=0 && y<=0) m3[x*1.0/y]++;
        else m4[x*1.0/y]++;
    }

    cout << m1.size()+m2.size()+m3.size()+m4.size();
    return 0;
}