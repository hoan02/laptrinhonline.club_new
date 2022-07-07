#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    string copy;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        copy[i] = s[n - 1 - i];
        if (copy[i] == s[i])
        {
            count++;
        }
        else
            break;
    }
    if (count == n)
        cout << "YES";
    else
        cout << "NO";
}