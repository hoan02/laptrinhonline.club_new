#include<bits/stdc++.h>
using namespace std;
vector<long> q,a;
long test(long n) {
    long m, k, i = 1, b;
    while (n % i == 0 && i <= n / i) {
        m = i;
        k = n / i;
        b = (m - 1) * (k + 1);
        a.push_back(b);
        cout<<b<<" ";
        if (b > 0)
          test(b);
        q.push_back(b);
        i++;
        while (n % i != 0)
            i++;
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long n;
    cin >> n;
    cout<<n<<" ";
    a.push_back(n);
    test(n);
    q.push_back(n);
    cout<<endl;
    cout<<a[a.size()-1]<<" ";
    for(int i=0;i<a.size()-1;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(auto x:q) cout<<x<<" ";
}