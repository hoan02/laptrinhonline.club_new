#include<bits/stdc++.h>
using namespace std;
int f(int a,int b,char c){
 return c=='+'?a+b:a-b;
}
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 string s,x;
 stack<char> S1;
 stack<int> S2;
 cin>>x;
 for(int c=0;c<x.length();c++){
  if(x[c]>='0'&&x[c]<='9'){
   S2.push(x[c]-'0');
   while(x[c+1]>='0'&&x[c+1]<='9') S2.top()=S2.top()*10+x[++c]-'0';
   while(S1.size()&&S1.top()!='('){
    int u=S2.top();S2.pop();
    S2.top()=f(S2.top(),u,S1.top()); 
    S1.pop();
   }
  }
  else if(x[c]==')'){
   S1.pop();
   while(S1.size()&&S1.top()!='('){
    int u=S2.top();S2.pop();
    S2.top()=f(S2.top(),u,S1.top()); 
    S1.pop();
   }  
  }
  else S1.push(x[c]);
  
 } 
 cout<<S2.top();
}