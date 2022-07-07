#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 string s = "123456789";
 int n ;
 cin >> n;
 s.erase(n);
 do{
  cout << s << "\n";
 } while(next_permutation(s.begin(),s.end()));
 return 0;
}