#include <iostream>
#include <vector>

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int n, input;
 vector<bool> v(66000,true);
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
  cin >> input;
  if (v[input + 33000] == true)
  {
   cout << input << ' ';
   v[input + 33000] = false;
  }
 }
 return 0;
}