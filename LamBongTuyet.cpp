#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<math.h>
#include<set>

using namespace std;

#define MAXN 100005
#define INF 1e9
#define pb push_back
#define mp make_pair
#define M 1000000007

typedef pair<int, int> ii;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<int> vi;

ll V[MAXN];
ll T[MAXN];
ll P[MAXN];
int main(){
 ios_base::sync_with_stdio(false);
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
  cin>>V[i];
 }
 for(int i=1;i<=n;i++){
  cin>>T[i];
  P[i] = P[i-1] + T[i];
 }
 priority_queue<ll, vector<ll>, std::greater<ll> > pq;
 for(int i=1;i<=n;i++){
  ll cr = 0;
  pq.push(V[i] + P[i-1]);
  while(pq.empty() == false && pq.top() <= P[i]) cr += pq.top() - P[i - 1],pq.pop();
  cr += T[i] * pq.size();
  cout<<cr<<" ";
 }
 return 0;
}