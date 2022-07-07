#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ll long long
#define For(i, a, b) for (ll i = a; i <= b; ++i)
#define Fo(i, a, b) for (ll i = a; i < b; ++i)
#define Ford(i, a, b) for (ll i = a; i >= b; --i)

int dp[1005];
int main() {

    fast_cin;
    int n, M, b, money, value;
    cin >> n >> M;

    Fo(i, 0, n) {
        cin >> money >> b;
        float a = money * b * 1.0 / 100;
        value = a;
        Ford(j, M, money) {
            if (money <= M) {
                dp[j] = max(dp[j], dp[j - money] + value);
            }
        }
    }


    cout << dp[M];
}