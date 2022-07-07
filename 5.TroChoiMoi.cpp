#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n, kt = 1;
  cin >> n;
  map<int, int> mp;
  int a[103], b[103] = {};
  for(int i = 0; i < n; i++)
  {
   cin >> a[i];
   if(i == 0) {
    if(a[i] == 0) b[i] = 1;
    else continue;
   }
   if(a[i] == 0 && a[i-1] == 1) b[i] = 1;
 }
 for(int i = 0; i < n; i++)
 {
  if(b[i] == 1)
  {
  int max = -103, c[103] = {};
  c[i] = 1;
  kt = 0;
   for(int j = i; j < n; j++)
   {
    if(j == 0 ) {if(max < c[j]) max = c[j];}
    else{
     if(a[j] == 0) {
    
    c[j] = c[j-1] + 1;
    if(max < c[j]) {max = c[j];}
    }
    else c[j] = c[j-1] - 1;}
   }
  mp[i] = max;
  }
 }
 int max = -103, res = 0, count = 0;
 for(auto x : mp)
 {
  if(x.second >= max) {max = x.second; res = x.first;}
 }
 for(int i = 0; i < n; i++){
  if(i == res && a[i] == 0) {
   while(max != 0 && max <= n) {
   if(a[i] == 0){count++; i++; max--;}
   else {i++; max++;}
  } 
 }
 if(a[i] == 1) count++;
 }
 if(kt == 0) cout << count;
 else cout << n-1;
  return 0;
}