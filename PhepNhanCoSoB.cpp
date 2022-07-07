#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
#define ll long long
#define ull unsigned long long
#define endl "\n"
#define x first
#define y second
//                       Loren_Nam
char HT[]={"0123456789abcdef"};
string a,b;
int HS=10;
void BienDoi(string a,int *A)
{
 for(int i=0,j=a.length()-1;i<a.length();i++,j--)
 A[j]=a[i] > '9' ? a[i]-'a'+10 : a[i]-'0';
}
list<char> Nhan(int* A,int* B)
{
 list<char> x;
 int C[a.length()+b.length()+2]={0};
 for(int i=0;i<a.length();i++){
  for(int j=0;j<b.length();j++)
      C[i+j]+=A[i]*B[j];
 }
 for(int i=0;i<a.length()+b.length();i++)
 {
  x.push_front(HT[C[i]%HS]);
  C[i+1]+=C[i]/HS;
 }
 if(x.front()=='0')
 x.pop_front();
 return x;
}
int main()
{
 cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 cin>>HS;
 cin>>a>>b;
 int A[a.length()],B[b.length()];
 BienDoi(a,A);
 BienDoi(b,B);
 list<char> x;
 x=Nhan(A,B);
 for(auto it=x.begin();it!=x.end();it++)
 cout<<*it;
}