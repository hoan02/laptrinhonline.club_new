#include<bits/stdc++.h>
using namespace std;

int sol(long long &x){
    long long f[10]={1, 2, 5, 25, 125};
    int res=0;
    for(int i=0;i<5;i++){
        while(1){
            if(f[i]<=x){
                res++;
                f[i]*=10;
            }
            else break;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        long long x;
        cin >> x;
        cout << "#Case " << i << ": " << sol(x) << '\n';
    }    
    return 0;
}