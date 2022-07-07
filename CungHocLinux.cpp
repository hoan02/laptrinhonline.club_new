#include<bits/stdc++.h>
using namespace std;

string simplify(string s){
 vector<string>V;
    int n=s.length();
    string ans;
    for(int i=0;i<n;i++){
        string z="";
        while(i<n && s[i]!='/'){z+=s[i]; i++;}
        if(z==".."){
            if(!V.empty()) V.pop_back();
        }
        else if(z=="." || z==""){} //do nothing
        else V.push_back(z);
    }
    for(auto x:V) ans+="/"+x;
    if(ans=="") return "/";
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    cout << simplify(s);
    return 0;
}