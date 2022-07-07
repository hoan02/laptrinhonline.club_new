#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const unsigned long long mod=1e9+7;
typedef unsigned long long ull;
typedef long long ll;

int n,m,res=0;
int a[305][305];
bool visited[305][305];
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};


void init()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
}

void bfs(int i,int j)
{
    int check=0;
    queue<pair<int,int>>q;
    q.push({i,j});
    visited[i][j]=true;
    while (!q.empty())
    {
        pair<int,int>top=q.front();
        q.pop();
        for (int h=0;h<4;h++)
        {
            int i1=top.first+dx[h];
            int i2=top.second+dy[h];
            if (i1>=1 && i1<=n && i2>=1 && i2<=m && a[i1][i2]==0 && !visited[i1][i2])
            {
                if (i1==1 || i2==1 || i1==n || i2==m) check=1;
                q.push({i1,i2});
                visited[i1][i2]=true;
            }
        }
    }
    if (check==1) res--;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    memset(visited,false,sizeof(visited));
    for (int i=2;i<n;i++)
    {
        for (int j=2;j<m;j++)
        {
            if (!visited[i][j] && a[i][j]==0)
            {
                res++;
                bfs(i,j);
            }
        }
    }
    cout << res;
    return 0;
}