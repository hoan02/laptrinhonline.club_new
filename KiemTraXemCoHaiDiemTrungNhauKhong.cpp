#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_cin;

    int n;
    cin >> n;
    long a, b;
    pair<long , long>p;
    map <pair<long, long>, bool> m;
    cin >> a >> b;
    p=make_pair(a, b);
    m[p]=true;
    n--;
    while(n--)
    {
        cin >> a >> b;
        p=make_pair(a, b);
        if(m[p]==true)
        {
            cout << "YES";
            return 0;
        }
        m[p]=true;
    }
    cout << "NO";
    return 0;
}