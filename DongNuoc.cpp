#include<bits/stdc++.h>
using namespace std;
int i;
main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int a, b, c;
 cin>>a>>b>>c;
 if (c%__gcd(a,b) != 0)
  cout<<"Khong dong duoc nuoc";
 else if (c > a && c > b)
  cout<<"Khong dong duoc nuoc";
 else { 
  int k, da = 0, db = 0, ka = 0, kb = 0;  
  while (ka != c && kb != c) {
   if (ka == a) 
    ka = 0;
   else if (kb == 0)
    kb = b;
   else if (kb > 0) {
    k = a - ka;
    if (k > kb) 
     k = kb;
    ka += k; kb -= k;
   }
   da++;
  }
  ka = 0, kb = 0;
  while (ka != c && kb != c) {
   if (kb == b) 
    kb = 0;
   else if (ka == 0)
    ka = a;
   else if (ka > 0) {
    k = b - kb;
    if (k > ka) 
     k = ka;
    kb += k; ka -= k;
   }
   db++;
  }
  cout<<min(da,db);
 }     
}