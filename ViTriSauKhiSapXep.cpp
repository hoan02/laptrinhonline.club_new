#include <bits/stdc++.h>
using namespace std;
#define FOR(a,b)    for(int i = a; i < b; i ++)
struct SO{
 long value;
 long vitri;
};
bool ss(SO A, SO B)
{
 return A.value < B.value;
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 long n;
 cin >> n;
 SO A[n+5];
 FOR(0,n)
 {
  cin >> A[i].value;
  A[i].vitri = i+1;
 }
 sort(A,A+n+1,ss);
 FOR(0,n)
  cout << A[i].vitri << " ";

}