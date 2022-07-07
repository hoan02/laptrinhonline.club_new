#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sol(){
    ll n, m;
    cin >> n >> m;
    double z=double(m)*log10(n*1.0);
    z=z-(ll)z;
    double temp=pow(10.0, z); //10^z
    cout << int(temp) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}