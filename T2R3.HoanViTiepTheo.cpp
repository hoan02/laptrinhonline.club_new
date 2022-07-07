#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    string str;
    cin >> str;
    bool dec = next_permutation(begin(str), end(str));
    if(!dec) cout <<"KHONG CO HOAN VI TIEP THEO";
    else cout << str;

    return 0;
}