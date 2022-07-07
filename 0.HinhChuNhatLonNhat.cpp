// Kadane
#include<bits/stdc++.h>
using namespace std;

int kadane(int *d, int *start, int *finish, int n){
    int sum=0, res=INT_MIN, local_start=0;
    *finish=-1;
    for(int i=0;i<n;i++){
        sum+=d[i];
        if(sum<0){
            sum=0;
            local_start = i+1;
        }
        else if(sum>res){
            res=sum;
            *start = local_start;
            *finish = i;
        }
    }
    if(*finish!=-1){
        return res;
    }
    res=d[0];
    *start = *finish = 0;
    for(int i=1;i<n;i++){
        if(d[i]>res){
            res=d[i];
            *start = *finish = i;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, sum=0, res=INT_MIN, start ,finish;
    cin >> n;
    int a[n][n], d[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        memset(d, 0, sizeof(d));
        for(int j=i;j<n;j++){
            for(int k=0;k<n;k++){
                d[k]+=a[k][j];
            }
            sum = kadane(d, &start, &finish, n);
            res=max(sum, res);
        }
    }
    cout << res;
    return 0;
}