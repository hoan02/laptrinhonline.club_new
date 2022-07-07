#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_cin;

    int n, a[100005];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    int answer=0;
    for(int i=0; i<n; i++)
    {
        if(i+a[i]>answer)
        {
            answer=a[i]+i;
        }
    }
    cout << answer+2;
}