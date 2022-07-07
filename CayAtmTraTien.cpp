#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define max 10001

int main()
{
    
    fast_cin;

    priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q; 
    int n, m, money, count;
    cin >> n >> m;

    int a[n], check[m+1];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i <= m; i++)
    {
        check[i] = -1;
    }
    sort(a, a+n, greater<int>());

    check[0]=0;
    q.push({0, 0});
    while(!q.empty())
    {
        count = q.top().first;
        money = q.top().second;
        q.pop();
        for(int i = 0; i < n; i++)
        {
            if(a[i] + money <= m && check[a[i] + money] == -1)
            {
                check[a[i] + money] = count + 1;
                q.push({count + 1, a[i] + money});
            }
        }
    }

    if(check[m] == -1)
    {
        cout << "ATM khong the tra tien";
    }
    else
    {
        cout << check[m];
    }

    return 0;

}