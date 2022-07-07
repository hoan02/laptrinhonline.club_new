#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int main()
{
    fast_cin;

    int n;
    cin >> n;

    ll temp, c = 0;
    stack <pair<ll,ll>> S;
    S.push({0, LLONG_MAX});

    while(n--)
    {
        cin >> temp;
        while(S.top().second < temp)
        {
            c += S.top().first;
            S.pop();
        }  
        if(S.top().second == temp)
        {
            if(S.size() > 2) ++c;
            c += S.top().first++;
        }
        else
        {
   if(S.size() > 1)    ++c;
   S.push({1, temp});
        }
    }

    cout << c;
    return 0;
}