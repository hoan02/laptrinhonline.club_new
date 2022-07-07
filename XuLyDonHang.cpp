#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> M;
    while(n--){
        string s;
        int x;
        cin >> s >> x;
        M[s]=x;
    }
    long long res=0;
    while(m--){
        string s;
        cin >> s;
        res+=M[s];
    }
    cout << res;
    return 0;
}