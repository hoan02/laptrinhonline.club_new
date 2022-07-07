#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
 int i;
 for (;;) {
  for (i = 0; i < a.size() and i < b.size(); i++) {
   if (a[i] > b[i]) {
    return true;
   }
   else if (a[i] < b[i]) {
    return false;
   }
  }
  if (a.size() > b.size()) {
   a.erase(0, b.size());
  }
  else if (a.size() < b.size()) {
   b.erase(0, a.size());
  }
  else {
   return false;
  }
 }
}

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 vector<string>v(n);
 for (int i = 0; i < n; i++) {
  cin >> v[i];
 }
 sort(v.begin(), v.end(), compare);
 for (string i : v) {
  cout << i;
 }
 return 0;
}