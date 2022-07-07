#include <bits/stdc++.h>
using namespace std;



int main()
{
int t, n;
cin >> t;
while (t--)
{
cin >> n;
int num[n + 1];



memset(num, 0, sizeof(num));



num[0] = 1;



for (int i = 1; i < n; i++)
{
for (int j = i; j <= n; j++)
{
num[j] += num[j - i];
}
}



cout << num[n] + 1 << endl;
}
return 0;
}