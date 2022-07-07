#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    int a[n];
 for(auto &x:a) cin >> x;
    for(int i=0;i<n-1;i++) if(a[i]==a[i+1]) {cout << 0; return 0;}
    for(int i=0;i<n-2;i++) if((a[i]>a[i+1]&&a[i+1]>a[i+2])||(a[i]<a[i+1]&&a[i+1]<a[i+2])) {cout << 0; return 0;}
    cout << 1;
 return 0;
}