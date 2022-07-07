#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k;
    long long res=0;
    cin >> n >> k;
    long long a[n], b[n]={}, c[n+1]={}, d[n+1]={};
    for(auto &x:a) cin >> x;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x) b[i]=a[i];
    }
    partial_sum(a, a+n, c+1);
    partial_sum(b, b+n, d+1);
    for(int i=0;i+k<=n;i++){
        int l=i, r=i+k;
        long long s = d[l] + (c[r]-c[l]) + (d[n]-d[r]);
        res=max(s, res);
    }
    cout << res;
    return 0;
}