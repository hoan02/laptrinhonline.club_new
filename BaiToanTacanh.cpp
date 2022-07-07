#include<bits/stdc++.h>
using namespace std;
typedef pair<int,string> TT;
class tacanh
{
    map<TT,int> P;
    TT s,f;
    vector<int> Next[9]={{1,3},{2,0,4},{1,5},{4,6,0},{5,3,7,1},{4,8,2},{7,3},{8,6,4},{7,5}};
    void BFS()
    {
        if(s==f) {cout<<0; return;}
        queue<TT> Q;
        Q.push(s);
        P[s]=1;
        while(Q.size())
        {
            TT u=Q.front(); Q.pop();
            if(P[u]>1000) {cout<<-1; return;}
            for(auto x:Next[u.first]) 
            {
                string s=u.second;
                swap(s[u.first],s[x]);
                TT z={x,s};
                if(P.find(z)==P.end())
                {
                    P[z]=P[u]+1;
                //  cout<<P[z]-1<<" ";
                    Q.push(z);
                    if(z==f)
                    {
                        cout<<P[z]-1;
                        return;
                    }
                }
            }
        }
        cout<<"-1";
    }
    public:void sol()
    {
        string t="";
        int k;
        for(int i=0;i<9;i++)
        {
            char z;
            cin>>z; t.push_back(z);
            if(z=='0') k=i;
        }
        s={k,t};
        t="";
        for(int i=0;i<9;i++)
        {
            char z;
            cin>>z;t.push_back(z);
            if(z=='0') k=i;
        }
        f={k,t};
        BFS();
    }
};
int main()
{
    tacanh T; T.sol();
}