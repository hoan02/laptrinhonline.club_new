#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const unsigned long long mod=1e9+7;
typedef unsigned long long ull;
typedef long long ll;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n==6 || n==28 || n==496 || n==8128 || n==33550336 || n==8589869056 || n==137438691328) cout << n << " eh perfeito\n";
        else cout << n <<  " nao eh perfeito\n";   
    }
    return 0;
}