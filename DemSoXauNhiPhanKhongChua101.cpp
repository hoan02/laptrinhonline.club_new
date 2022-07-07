#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1e9+7;
const ll MAX = 1e6;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

int LowerToGreater(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

void insertArr(long long A[], long long n)
{
 for (long long i = 0; i < n; i++) cin >> A[i];
}

void printArr(long long *A, long long n)
{
 for (long long i = 0; i < n; i++) cout << A[i] << " ";
}

void sol()
{

}

int main()
{
 //qsort((arr,num,sizeof(int),LowerToGreater);
  //freopen("Input.txt", "r", stdin);
 std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
 
    ll n; cin >> n;
    ll MOD = 1000000007;
    ll Arr[n+1];
    Arr[1] = 2;
    Arr[2] = 4;
    Arr[3] = 7;
    for (ll i = 4; i <= n; i++)
    {
        Arr[i] = (Arr[i-1]*2 - Arr[i-2] + Arr[i-3]) % MOD;
    }
    cout << (Arr[n] + MOD) % MOD;
}