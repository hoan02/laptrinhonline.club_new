#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> a;
map<int, int> kt;

void Try(int m, string s) {
 kt[m]++;
 if(m<n || kt[m]>1|| a.empty()==false) {
  return;
 } else if(m==n) {
  a.push_back(s);
 }
 for(int i=sqrt(m); i>=1; i--) {
  if(m%i==0) {
   int t = (i-1)*(m/i+1);
   Try(t, s+" "+to_string(t));
  }
 } 
}

int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL);
 int m;
 cin >> m >> n; 
 Try(m, to_string(m)); 
 if(a.empty()) {
  cout << "Khong Sinh Ra Duoc";
  return 0;
 }
 cout << a[0];
 
}