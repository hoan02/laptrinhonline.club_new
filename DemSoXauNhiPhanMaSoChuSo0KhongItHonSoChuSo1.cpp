#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
//Work with int is max: multiplication int*int -> unsigned long long
//a^b broke at a = 1e9 + 7
const int MOD = 1e9 + 7;

int bigPow(ULL a, ULL b){
 ULL res = 1;
 while(b) //Chia de tri
    {
        if(b%2) res = a*res%MOD;
        a = a*a%MOD;
        b /= 2; 
    }
    return (int)res;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 int t;
 vector<int> seed;
 vector<ULL> save1 = {1}; //at C(0, 1);
 vector<ULL> save2 = {1};
 int sum = 1;
 cin >> t;
 while(t--){
  int tmp;
  cin >> tmp;
  seed.push_back(tmp);
 }
 int max = *max_element(begin(seed), end(seed));

    for(int i = 1; i <= max/2; i++){ 
     ULL a = i + 1, b = 4*i + 2;
     if(i%2) {
      a /= 2;
      b /= 2;
  }
  ULL c = save1.back()*b%MOD;
  c = c*bigPow(a, MOD - 2)%MOD;
        save1.push_back(c);
    }
    for(int i = 1; i <= max; i++)
        save2.push_back(2*save2.back()%MOD);
    
    for(int i = 0; i < seed.size(); i++)
        if(seed[i]%2) cout << save2[seed[i] - 1] << '\n';
        else cout << (save2[seed[i] - 1] + save1[seed[i]/2 - 1])%MOD << '\n';
 return 0; 
}

//save2 de luu day 2^n, save1 luu day C(n, 2*n + 1)
//save2[i] ~ 2^i, save1[i] ~ C(i, 2i + 1)
//Voi n le ket qua can tim la 2^(n - 1) (= save2[n - 1])
//Voi n chan ket qua can tim la 2^(n - 1) + C(n/2 - 1, n - 1) = save2[n - 1] + save1[n/2 - 1]