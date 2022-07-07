#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[10005]={};
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        for(int j=1e4;j>=x;j--){
            a[j]= max(a[j],a[j-x]+y);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<a[x]<<"\n";
    }
    return 0;
}