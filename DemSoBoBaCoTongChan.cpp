#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<double,double>dd;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll n,t,dl=0,dc=0;
 cin >> n;
 
 while(n--){
  cin >> t;
  if(t % 2) dl++;
  else dc++;
 }
 cout << dc*(dc-1)*(dc-2)/6 + dc * dl*(dl-1)/2 ;
  return 0;
}