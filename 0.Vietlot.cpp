// Kha hay
#include<bits/stdc++.h>
using namespace std;

const int MAX=1<<10; //0123456789

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long f[MAX+5]={}, ans=0;
    int n;
    cin >> n;
    while(n--){
        int d=0;
        string s;
        cin >> s;
        for(auto x:s) d|=(1<<(x-'0'));
        f[d]++;
    }
    for(int i=0;i<MAX;i++){
        if(f[i]){
            for(int j=i;j<MAX;j++){
                if(f[j]&&(i|j)==MAX-1) ans+=(i==j)?(f[i]*(f[i]-1)/2):(f[i]*f[j]);
            }
        }
    }
    cout << ans;
    return 0;
}