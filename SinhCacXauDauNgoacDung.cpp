//!Reference from geeksforgeek
#include <bits/stdc++.h>
#define MAX_SIZE 100
#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void _printParenthesis(int pos, int n, int open, int close);
 
// Wrapper over _printParenthesis()
void printParenthesis(int n)
{
    if (n > 0)
        _printParenthesis(0, n, 0, 0);
    return;
}
 
void _printParenthesis(int pos, int n, int open, int close)
{
    static char str[MAX_SIZE];
 
    if (close == n) {
        cout << str << '\n';
        return;
    }
    else {
      
        if (open < n) {
            str[pos] = '(';
            _printParenthesis(pos + 1, n, open + 1, close);
        }
        
        if (open > close) {
            str[pos] = ')';
            _printParenthesis(pos + 1, n, open, close + 1);
        }

    }
}
 
// Driver program to test above functions
int main()
{
 
 FASTIO;
    int n;
    cin >> n;
    printParenthesis(n);
    getchar();
    return 0;
}