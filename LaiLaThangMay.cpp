#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const unsigned long long mod=1e9+7;
typedef unsigned long long ull;
typedef long long ll;

long n,k,m,s,f;
long a[105];
bool visited[10005];
long root[10005];

void init()
{
    cin >> n >> k;
    for (int i=0;i<k;i++)
    {
        cin >> a[i];
    }
    cin >> s >> f;
}

void bfs(long i)
{
    memset(visited,false,sizeof(visited));
    //memset(root,0,sizeof(root));
    queue<long>q;
    q.push(i);
    root[i]=0;
    visited[i]=true;
    int check=1;
    while (!q.empty())
    {
        long top=q.front();
        q.pop();
        for (int h=0;h<k;h++)
        {
            long j=top+a[h];
            if (j>=1 && j<=n && !visited[j])
            {
                q.push(j);
                visited[j]=true;
                root[j]=root[top]+1;
                if (j==f) 
                {
                    check=0;
                    break;
                }
            }
        }
        if (check==0) break;
    }
    if (!visited[f]) cout << -1;
    else cout << root[f];
}

int main()
{
    init();
    bfs(s);
    return 0;
}