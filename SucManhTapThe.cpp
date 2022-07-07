#include<bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define fi first
#define se second

using namespace std;


int n,m;
int a[9][9];
bool check[9][9]={};
int MAX=-1;//sm max
int b[9];
void Try(int i){//nhom i ptu j
// cout<<"max = "<<MAX<<endl;
// cout<<"i = "<<i<<endl;
 if(i>n){
  int sum=0;
  for(int k=1;k<=n;k++)
   sum+=b[k]*b[k];
  sum%=m;
  MAX=max(MAX,sum);
  return ;
 }
 for(int k=1;k<=a[i][0];k++){
  if(check[i][k]==false){
   check[i][k]=true;
   b[i]=a[i][k];
   Try(i+1);
   check[i][k]=false;
  }
 }
}

int main(){
// freopen("input.txt","r",stdin);
 cin>>n>>m;
 for(int i=1;i<=n;i++){
  cin>>a[i][0];
  for(int j=1;j<=a[i][0];j++)
   cin>>a[i][j];
 }
 Try(1);
 cout<<MAX;
}