#include<bits/stdc++.h>
using namespace std;
map<char,int> ut = {{'*',2},{'/',2},{'+',1},{'-',1},{'(',0}};
int tinhToan(int a,int b,char c){
 if(c == '+') return a+b;
 else if(c =='-') return a-b;
 else if(c=='*') return a*b;
 else return a/b;
}
int main(){
 string str; cin>>str;
 string h; 
 stack<char> s;
 for(char c : str){
  if(c>='0' && c<='9'){
   h+=c;
  }
  else if(c == '('){
   s.push(c);
  }
  else if(ut.find(c) != ut.end()){
   while(s.size()>0 && ut[s.top()] >= ut[c]){
    h+=s.top();
    s.pop();
   }
   s.push(c);
  }
  else if(c == ')'){
   while(s.top()!='('){
    h+=s.top();
    s.pop();
   }
   s.pop();
  }
 }
 while(s.size()>0){
  h+=s.top();
  s.pop();
 }
 cout<<h<<endl;
 
 stack<int> o;
 for(char c : h){
  if(c>='0' && c<='9'){
   o.push(c-'0');
  }
  else{
   int k=o.top();
   o.pop();
   o.top() = tinhToan(o.top(),k,c);
  }
 }
 cout<<o.top();
}