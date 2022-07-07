#include<iostream>
#include<queue>
using namespace std;

main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 long n;
 cin >> n;
 if(n%5==0){
  cout << '0';
  return 0;
 }
 queue<long long> q;
 q.push(6);
 q.push(8);
 long long a= q.front();
 while(!q.empty()){
  a= q.front();
  q.push(a*10+6);
  q.push(a*10+8);
  if(a%n==0){
   cout << a;
   return 0;
  }
  q.pop();
 }
 cout << '0';
}