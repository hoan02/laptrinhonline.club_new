#include<bits/stdc++.h>
using namespace std;

const int MAX=1<<10; //0123456789

void sol(){
    int a[MAX]={}, b[MAX]={}, n, x, ans=0;
    cin >> n;
    while(n--){
        cin >> x;
        int d=0;
        for(auto c:to_string(x)) d|=1<<(c-'0');
        for(int i=0;i<MAX;i++){
            b[i]=max(b[i], a[i]);
            if(!(i&d)){
                int z=i|d;
                b[z]=max(b[z], a[i]+x);
                ans=max(ans, b[z]);
            }
        }
        copy(b, b+MAX, a);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}