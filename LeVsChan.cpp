#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1000000007;
const ll MAX = 1e6;

template<typename T>
ll LowerToGreater(const void* a, const void *b)
{
    const T *x = (T*) a;
    const T *y = (T*) b;

    if (*x > *y) return 1;
    else if (*x < *y) return -1;
    return 0;
}

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

// int LowerToGreater(const void* a, const void* b)
// {
//     const ll* x = (ll*) a;
//     const ll* y = (ll*) b;
//     if (*x > *y)
//         return 1;
//     else if (*x < *y)
//         return -1;
//     return 0;
// }

int main()
{
  //freopen("Input.txt", "r", stdin);
 std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
    ll n; cin >> n;
    ll Arr[n+1]; Arr[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        cin >> Arr[i];
        if (Arr[i] % 2 == 0) Arr[i] = 1;
        else Arr[i] = -1;
    }

    for (ll i = 1; i <= n; i++) Arr[i] += Arr[i - 1];

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    for (ll j = i + 1; j <= n; j++)
    {
        if ((Arr[j] - Arr[i]) >= (n - j))
        {
            //cout << "1: i = " << i << " j = " << j << endl;
            ans += (n - j + 1);
            //cout << "ans = " << ans << endl << endl;
            break;
        }

        if (Arr[j] - Arr[i] >= 0)
        {
            //cout << "2: i = " << i << " j = " << j << endl;
            ans++;
            //cout << "ans = " << ans << endl << endl;
        }
    }
    cout << ans;
}