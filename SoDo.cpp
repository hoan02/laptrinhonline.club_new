#include<bits/stdc++.h>
    using namespace std;

    #define endl "\n"
    const unsigned long long mod=1e9+7;
    typedef unsigned long long ull;
    typedef long long ll;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long t;
        cin >> t;
        while (t--)
        {
            ull n;
            cin >> n;
            if (n==0) cout << 1;
            else if (n<3) cout << n;
            else if (n<=4) cout << 6;
            else if (n==5) cout << 3;
            else if (n>5) cout << 9;
            cout << endl;
        }
        return 0;
    }