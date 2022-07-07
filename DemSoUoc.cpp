#include <iostream>
using namespace std;
typedef unsigned long ull;

ull sovle(ull n) {
 return n / 3 + n / 5 + n / 7 - n / 15 - n / 21 - n / 35 + n / 105;
}
int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
 ull q, n;
 cin >> q;
 while (q--) {
  cin >> n;
  cout << sovle(n) << "\n";
 }

 return 0;
}