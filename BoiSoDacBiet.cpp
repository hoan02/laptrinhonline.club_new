#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<long long>save(501, 0);
int n;
bool check;

void Backtracking(long long s , int end) {
    if (check == false) {
        if (end == -1) {
            if (s % n == 0) {
                cout << s << '\n';
                check = true;
                save[n] = s;
            }
        }
        else {
            Backtracking(s, end - 1);
            Backtracking(s + 9 * pow(10, end), end - 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    for (int i = 1; i <= test; i++) {
        check = false;
        cin >> n;
        if (save[n]) {
            cout << save[n] << '\n';
        }
        else {
            for (int j = to_string(n).size() - 1;; j++) {
                Backtracking(9 * pow(10, j), j - 1);
                if (check == true) {
                    break;
                }
            }
        }
    }
    return 0;
}