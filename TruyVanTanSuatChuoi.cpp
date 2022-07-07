#include <iostream>
#include <vector>
#include <map>

using namespace std;


vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> ans;
    map<string,int> mp;
    for (auto s : strings) mp[s]++;
    for (auto s : queries) ans.push_back(mp[s]);
    return ans;
}

int main()
{
 ios::sync_with_stdio(false); cin.tie(NULL);
 int n,q;
 cin >> n; vector<string> N(n);
 for(int i=0; i<n; i++) cin >> N[i];
 
 cin >> q; vector<string> Q(q);
 for(int i=0; i<q; i++) cin >> Q[i];
 
 vector<int> ans = matchingStrings(N, Q);
 for(auto v : ans) cout << v << '\n';
}