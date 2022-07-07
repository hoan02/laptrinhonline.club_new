#include <iostream>
using namespace std;
int min(int a, int b){
    return a < b ? a : b;
}

int main(){
    int n;
    cin >> n;
    int lt[n+5]={};
    int i, j;
    lt[0]=lt[1]=1;
    for(i=2; i<=n; i++){
     for(j=1; j<=min(i, 3); j++){
         lt[i]+=lt[i-j];
     }
    }
    cout << lt[n];
 return 0;
}