#include<bits/stdc++.h>
using namespace std;

const double ESP = 1e-9;

void sol(){
    long long l, r;
    cin >> l >> r;
    for(int i=39;i>=1;i--){  //2^40 > 10^12
        if(l-pow(floor(pow(r, 1.0/i)+ESP), i)<ESP){
            cout << i << '\n';
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int t;
    cin >> t;
    while(t--) sol();
    return 0;
}