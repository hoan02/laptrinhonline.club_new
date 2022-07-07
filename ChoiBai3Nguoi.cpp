#include<bits/stdc++.h>
using namespace std;

vector<string> V(3);

void playing(int i){
    if(V[i].empty()){
        cout << char('A'+i);
        return;
    }
    else{
        int k=V[i][0]-'a';
        V[i].erase(V[i].begin(), V[i].begin()+1);
        playing(k);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(auto &x:V) cin >> x;
    playing(0);
    return 0;
}