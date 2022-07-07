#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define ii pair <int, int>
#define llll pair <ll, ll>

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Input.txt", "r", stdin);
// freopen("Output.txt". "w", stdout);
void sol()
{

}

int main()
{
 ios::sync_with_stdio(0); cin.tie(); cout.tie();
 int n, m; cin >> n >> m;
 ll A[n], B[m];
 for (int i = 0; i < n; i++) cin >> A[i];
 for (int i = 0; i < m; i++) cin >> B[i];
 sort(A, A+n);
 for (int i = 0; i < m; i++)
 {
  cout << upper_bound(A, A+n, B[i]) - A << endl;
  }
}