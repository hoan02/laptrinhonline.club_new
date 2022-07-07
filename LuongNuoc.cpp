#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ios::sync_with_stdio(false);
 long long n;
 long long a[1000001], vitri[10000];
 long long res = 0, dem = 0;
 cin >> n;
 for (long long i=0; i<n; i++)
  cin >> a[i];
    int max = 0;
 for (long long i=0; i<n; i++){
        if (a[i]>max){
            max = a[i];
            vitri[dem] = i;
            dem ++;
        }
 }
 int k = vitri[dem-1];
 //cout << k;
 max = 0;
 for (int i=n-1; i>k; i--){
        if (a[i]>max){
            max = a[i];
            vitri[dem] = i;
            dem ++;
        }
 }
 sort(vitri, vitri+dem);
 for (int i=1; i<dem; i++){
        ll d = vitri[i-1];
        ll c= vitri[i];
        int MIN = min(a[d], a[c]);
        for (ll j=d; j<=c; j++){
            if(MIN > a[j])
                res+= (MIN-a[j]);
            //cout << res << " ";
        }
 }
 //for (int i=0; i<dem; i++)
       // cout << vitri[i] << " ";
 //}
 cout << res;
}