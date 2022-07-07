#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k;
    cin >> n >> k;
    int f[k]={}, ans=0, x;
    while(n--){cin >> x; f[x%k]++;}
    if(k%2==0) f[k/2]=min(1, f[k/2]);
    ans=min(1, f[0]);
    for(int i=1;i<=k/2;i++) ans+=max(f[i], f[k-i]);
    cout << ans;
    return 0;
}