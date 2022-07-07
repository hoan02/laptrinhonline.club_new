#include <iostream>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
struct hang{
    long long time, mon;
};
bool compare(hang &a, hang&b){
    if (a.time < b.time)
        return 1;
    if (a.time == b.time)
        return a.mon < b.mon;
    return 0;
}
int main(){
    long long res,  n;
    hang h[100005];
    ios::sync_with_stdio(0);
    cin >> n;
    for(long i=0; i<n; i++){
        cin >> h[i].time >> h[i].mon;
    }
    sort(h, h+n, compare);
    priority_queue<long long> q;
    long long d = n-1;
    res = 0;
    while(n>0){
        while (d>=0 && h[d].time>=n){
            q.push(h[d].mon);
            d--;
        }
        if(!q.empty()){
            res+=q.top();
            q.pop();
        }
        n--;
    }
    cout << res;
}