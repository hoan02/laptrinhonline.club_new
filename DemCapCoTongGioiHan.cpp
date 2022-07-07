/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . ___
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
                vincent-tran ^_^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[1000005];


int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int n, m; cin >> n >> m;
 long long cnt = 0;
 for(int i = 0; i < n; ++i) cin >> a[i];
 sort(a, a + n);
 int i = 0, j = n - 1;
 while(i < j){
  if(a[i] + a[j] <= m){
   cnt += (j - i);
   ++i;
  }
  else --j;
 }
 return cout << cnt << endl, 0;
}