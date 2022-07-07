#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m, x;
    cin >> n;
    int a[n+5];
 cin >> a[1];
 for(int i=2;i<=n;i++){
  cin >> a[i];
  if(a[i]==a[i-1]){i--; n--;}
 }
 cin >> m;
 while(m--){
  cin >> x;
  while(n){
   if(x>=a[n]) n--;
   else break;
  }
  n++; a[n]=x;
  cout << n << '\n';
    }
    return 0;
}