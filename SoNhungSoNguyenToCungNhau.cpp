#include<bits/stdc++.h>
#define ll long long
using namespace std;
void unt(int n)
{ 
 map<int,int>m;
 ll s = n; 
 for(int i = 2 ; i*i <= n; i++)
    {
     if(n%i==0){
      while(n%i == 0)
         { 
   m[i]=1; 
            n = n / i;
        }
  s*= (1-1.0/i);
  } 
 
    }
    if(n>1) s*= (1-1.0/n);
 cout<<s<<endl; 
}
int main()
{
 int k; cin>>k;
 while(k--){
  int n;
  cin>>n; 
  unt(n); 
 }

}