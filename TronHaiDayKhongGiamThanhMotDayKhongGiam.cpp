#include<cstdio>
#include<cstring>
using namespace std;

#define rep(i, l, r) for(int i=(l), i##_end_=(r); i<=i##_end_; ++i)
template<class T>inline T readin(T x){
    x=0; int f=0; char c;
    while((c=getchar())<'0' || '9'<c) if(c=='-') f=1;
    for(x=(c^48); '0'<=(c=getchar()) && c<='9'; x=(x<<1)+(x<<3)+(c^48));
    return f? -x: x;
}
template<class T>inline void writc(T x){
    static int fwri_sta[1005], fwri_ed=0;
    if(x<0) putchar('-'), x=-x;
    do fwri_sta[++fwri_ed]=x%10, x/=10; while(x);
    while(putchar(fwri_sta[fwri_ed--]^48), fwri_ed);
    putchar(' ');
}

const int maxn=1e6;
int a[maxn+5], n;
int b[maxn+5], m;

static inline void input(){
    n=readin(1);
    rep(i, 0, n-1) a[i]=readin(1);
    m=readin(1);
    rep(i, 0, m-1) b[i]=readin(1);
}

static inline void output(){
    int i = 0, j = 0;
    while(i < n || j < m) {
  if(j >= m || (a[i] <= b[j] && i < n)) writc(a[i++]);
  else writc(b[j++]);
 }
}

signed main(){
    input();
    output();
    return 0;
}