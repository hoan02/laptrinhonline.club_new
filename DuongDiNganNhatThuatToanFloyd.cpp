#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, test, a, b;
    cin >> n >> m >> test;
    vector<vector<int>>v(n + 1, vector<int>(n + 1, 1000000000));
    for (int i = 1; i <= n; i++) {
        v[i][i] = 0;
    }
    for (int dist, i = 0; i < m; i++) {
        cin >> a >> b >> dist;
        v[a][b] = dist;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (v[i][j] > v[i][k] + v[k][j]) {
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }
    for (int i = 0; i < test; i++) {
        cin >> a >> b;
        if (v[a][b] == 1000000000) {
            cout << "-1\n";
        }
        else {
            cout << v[a][b] << '\n';
        }
    }
    return 0;
}