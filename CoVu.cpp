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
using namespace std;
#define N 1000000

int mp[2 * N + 7] = { };

int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 //freopen("in.txt", "r", stdin);
 string s; cin >> s;
 int sum = 0, res = 0;
 for(int i = 0; i < s.size(); ++i){
  sum += s[i] == 'D' ? 1 : -1;
  if(sum == 0) res = max(res, i + 1);
  else if(mp[sum + N]) res = max(res, i - mp[sum + N]);
  if(!mp[sum + N]) mp[sum + N] = i;
 }
 return cout << res, 0;
}