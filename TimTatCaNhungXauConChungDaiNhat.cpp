#include<bits/stdc++.h>
#define MAX 105
using namespace std;

string s1, s2;
int l1, l2, LCSLength = 0;
int C[MAX][MAX];

int calcLCSLenght(int i, int j) {
    int &lcsLen = C[i][j];
    if (i==l1 || j==l2)
        return lcsLen = 0;
    if (lcsLen != -1)
        return lcsLen;
    lcsLen = 0;
    if (s1[i] == s2[j])
        lcsLen = 1 + calcLCSLenght(i+1, j+1);
    else
        lcsLen = max(calcLCSLenght(i+1, j), calcLCSLenght(i, j+1));
    return lcsLen;
}

void printAllLCS(char data[], int u, int v, int c) {
    if (c == LCSLength) {
        data[c] = '\0';
        puts(data);
        return;
    }
    if (u==l1 || v==l2) return;
    for (char x='a'; x<='z';x++) {
        bool check = false;
        for (int i=u; i<l1; i++) {
            if (x==s1[i]) {
                for (int j=v; j<l2; j++) {
                    if (x==s2[j] && calcLCSLenght(i, j) == LCSLength-c) {
                        data[c] = x;
                        printAllLCS(data, i+1, j+1, c+1);
                        check = true;
                        break;
                    }
                }
            }
            if(check) break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    memset(C, -1, sizeof(C));
    LCSLength = calcLCSLenght(0, 0);
    if(!LCSLength) {cout << "khong co xau con chung"; return 0;}
    char data[MAX];
    printAllLCS(data, 0, 0, 0);
    return 0;
}