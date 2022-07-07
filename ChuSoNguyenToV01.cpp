#include<bits/stdc++.h>
using namespace std;

const int N=4;
char f[N+1]={'7', '2', '3', '5'};

void sol(){
 int x, d;
    string s;
    cin >> x;
 while(x){
  d=x%N;
  s+=f[d];
  if(x%N==0) x--;
  x/=N;
 }
    reverse(s.begin(), s.end());
 cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout << "#" << i << " ";
        sol();
    }
 return 0;
}