#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n, m;
    cin >>n>>m;
    long a[n+1]={};
    long sum[n+1]={};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]+=sum[i-1]+a[i];
    }
    if(sum[n]%m!=0) {
        cout<<0;
        return 0;
    }
    long res[n+1][m+2];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            res[i][j]=0;
        }
    }
    res[0][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(sum[i]-sum[j]==sum[n]/m){
                for(int k=0;k<=m;k++){
                    res[i][k+1]+=res[j][k];
                }
            }
        }
    }
    cout<<res[n][m];
    return 0;
}