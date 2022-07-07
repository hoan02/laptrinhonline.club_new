#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 string s;
 cin >> s;
 set<string> S;
 int n = s.length();
 for(int i=0;i<n;i++){
  string z;
  for(int j=i;j<n;j++){
   z+=s[j];
   S.insert(z);
  }
 }
 for(auto x:S) cout << x << '\n';
    return 0;
}