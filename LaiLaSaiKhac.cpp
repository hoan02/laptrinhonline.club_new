#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
 long long n;
 unsigned long long sum=0;
 cin >> n;
 vector<long long> a;
 for (long long i=0; i<n; i++){
  long long num;
  cin >> num;
  a.push_back(num);
 }
 sort(a.begin(), a.begin()+n);
 for (long long i=0; i<n; i++){
  long long k = a[i]*i - a[i]*(n-i-1);
  sum += k;
 }
 cout << sum;
}