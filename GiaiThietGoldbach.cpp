#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
struct Goldback
{
 bool d[MAX]; //Danh dau
 vector<int> P; //Chua cac so nguyen to sang duoc
 void sang()
 {
  fill(d,d+MAX,1); //Gia su so nao cung nguyen to
  for(long long i=2;i<MAX;i++)
  if(d[i])
  {
   P.push_back(i);
   for(long long j=i*i;j<MAX;j+=i) d[j]=0; //xu li cac boi so cua i
  }
 }
 int dem(int n)
 {
  int dem=0;
  for(int i=0;i<P.size() && 3*P[i]<=n;i++)
   for(int j=i;j<P.size() && P[i]+P[j]+P[j]<=n;j++)
   dem+=d[n-P[i]-P[j]] ;
   return dem;
 }
};
int main()
{
 Goldback G;
 int n;
 G.sang();
 cin>>n;
 cout<<G.dem(n);
}