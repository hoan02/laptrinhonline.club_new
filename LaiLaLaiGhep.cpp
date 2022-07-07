#include<bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define fi first
#define se second

using namespace std;
string bo,me;
char temp[20];

int n;
void Try(int i){
 if(i==n){
  int dem=0;
  int check=1;
  for(int i=0;i<n;i++){
   if(temp[i]!='A')
    dem++;
   else
    dem=0;
   if(dem==3)
    check=0;
  }
  if(check)
   cout<<temp<<endl;
  return ;
 }
 temp[i]=bo[i];
 Try(i+1);
 if(bo[i]!=me[i]){
  temp[i]=me[i];
  Try(i+1);
 }
  
}


int main(){
// freopen("input.txt","r",stdin);
 cin>>bo>>me;
 n=bo.size();
 for(int i=0;i<n;i++)
  if(bo[i]>me[i]){
   swap(bo[i],me[i]);
  }
 Try(0);
}