#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long
LL mulMod(LL a,LL b,LL M) //Best a*b%M alg, still O(1)
{
    if(log10(a) + log10(b) < 17) return a*b%M;
    //if(a > b) swap(a, b);
    LL c = sqrt(b);    
 //b = c*q+r => a*b = a*c*q + a*r, q = "b/c", r = "b%c"
    return (mulMod(a*c%M, b/c, M) + mulMod(a, b%c, M))%M;
}

void test()
{
    string x;
    LL a = 0, b, M, t=1;
    cin >> x >> b >> M;
    for(char c:x) a=(a*10+c-'0')%M;     //tinh a^b%M;
    /*lengthy*/
 while(b)
    {
        if(b%2) t = mulMod(a,t,M); 
        b /= 2; 
        a = mulMod(a,a,M);
    }
    cout << t << "\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--) test();
}