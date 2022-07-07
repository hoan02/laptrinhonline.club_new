#include <bits/stdc++.h>
using namespace std;
long kc(long x1, long y1, long x2, long y2)
{
    return pow((x1-x2),2)+pow((y1-y2),2);
} 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, r;
    cin>>n>>r;
    long a, b;
    cin>>a>>b;
    long x[n+5], y[n+5], d=0;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
            if(kc(x[i],y[i],a,b)<=r*r)
                d++;
    cout<<d*(d-1)/2;
}