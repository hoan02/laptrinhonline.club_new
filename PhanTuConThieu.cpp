#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 int input;
 vector<int>v;
 while (scanf("%d", &input) != EOF) {
  v.push_back(input);
 }
 sort(v.begin(), v.end());
 if (v[0] != 1) {
  cout << 1;
 }
 else {
  for (int i = 0; i < v.size() - 1; i++) {
   if (v[i + 1] - v[i] != 1) {
    cout << v[i] + 1;
    return 0;
   }
  }
  cout << v.back() + 1;
 }
 return 0;
}