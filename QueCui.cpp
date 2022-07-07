#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n+2];
    for (int i = 0; i < n; i ++)    cin >> a[i];
    sort(a, a+n);
    int mid = a[n/2];
    long long res = 0;
    for (int i = 0; i < n; i ++) 
        res += abs(a[i]-mid);
    cout << res;
}