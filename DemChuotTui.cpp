#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

int A[500010], tmp[500010];
void pakuri_sort(int N, int A[]) {
 const int b = 8;
 rep(k, 4) {
  int kazu[1 << b] = {}, kazu2[1 << b] = {};
  rep(i, N) kazu[A[i] >> k * b & ((1 << b) - 1)]++;
  rep(i, (1 << b) - 1) kazu[i + 1] += kazu[i];
  for (int i = N - 1; i >= 0; i--) tmp[--kazu[A[i] >> k * b & ((1 << b) - 1)]] = A[i];
  k++;
  rep(i, N) kazu2[tmp[i] >> k * b & ((1 << b) - 1)]++;
  rep(i, (1 << b) - 1) kazu2[i + 1] += kazu2[i];
  for (int i = N - 1; i >= 0; i--) A[--kazu2[tmp[i] >> k * b & ((1 << b) - 1)]] = tmp[i];
 }
}

int main() {
 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    rep(i, n) cin >> A[i];
    pakuri_sort(n, A);
    int k=(n+1)/2, d=0;
 while(k<n){
  if(A[k]>=A[d]*2) {d++;k++;}
  else k++;
 }
 cout << n-d;
 return 0;
}