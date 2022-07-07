#include<bits/stdc++.h>
using namespace std;

string convert_hex(int x){
    string z;
    int i=0;
    while(x!=0){
        int temp=x%16;
        if(temp<10){
            z.push_back(temp+48);
            i++;
        }
        else{
            z.push_back(temp+87);
            i++;
        }
        x/=16;
    }
    return z;
}

string encrypt(string &s){
    string z;
    int cnt=0;
    for(int i=1;i<=s.length();i++){
        cnt++;
        if(s[i-1]!=s[i]){
            z+=s[i-1];
            z+=convert_hex(cnt);
            cnt=0;
        }
    }
    reverse(z.begin(), z.end());
    return z;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << encrypt(s) << '\n';
    }
    return 0;
}