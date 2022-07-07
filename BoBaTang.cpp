#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
#define de(x) cout << #x << " is " << x << endl;
#define de2(x,y) cout << #x << " is " << x << " " << #y << " is " << y << endl;
#define de3(x,y,z) cout << #x << " is " << x << " " << #y << " is " << y << " " << #z << " is " << z << endl;
#define dearr(v) {for (auto i:v) cout << i << " "; cout << endl;}

const int sz = 100005;
ll bit[2*sz], inc[sz];

void update(int i, int val){
 for (; i<sz; i+=i&(-i))
  bit[i]+=val;
}

ll sum(int i){
 ll t=0;
 while (i>0){
  t += bit[i];
  i-=i&(-i);
 }
 return t;
}


int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n;
 cin >> n;
 int a[n];
 int am=0;
 for (int i=0; i<n; ++i){
  cin >> a[i];
  if (a[i]<0) am=min(am,a[i]);
  a[i]++;
  inc[i]=1;
 }
 if (am<0)
  for (auto &i:a)
   i-=am;
 ll d=0;
 for (int i=2; i<=3; ++i){
  memset(bit, 0, sizeof bit);
  for (int j=0; j<n; ++j){
   update(a[j],inc[j]);
   inc[j] = sum(a[j]-1);
  }
 }
 for (int i=0; i<n; ++i)
  d+=inc[i];
 cout << d;
 return 0;
}