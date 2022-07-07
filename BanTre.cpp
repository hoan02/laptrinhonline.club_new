#include <iostream>
using namespace std;
int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
 long long n, k, x, res = 0;
 cin >> n >> k;
 while (n--) {
  cin >> x;
  res += x / k;
 }
 cout << res * k * 3;

 return 0;
}