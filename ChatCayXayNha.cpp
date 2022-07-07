#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1e9+7;
const ll MAX = 100000;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

int LowerToGreater(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

void insertArr(long long A[], long long n)
{
 for (long long i = 0; i < n; i++) cin >> A[i];
}

void printArr(long long *A, long long n)
{
 for (long long i = 0; i < n; i++) cout << A[i] << " ";
}

bool cmp(pair <ll, ll> A, pair <ll, ll> B)
{
    if (A.first < B.first) return true;
    else if (A.first == B.first) 
    {
        if (A.second < B.second) return true;
        return false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 //qsort((arr,num,sizeof(int),LowerToGreater);
  //freopen("Input.txt", "r", stdin);
    long long n, l, cnt = 0;
    cin >> n >> l;
    long long a[n];
 long long left = 0, right = 0;
    for(int i = 0; i < n; i++){
     cin >> a[i];
     right = max(right, a[i]);
 }
 while(left <= right){
  long long mid = (left+right)/2;
  long long sum = 0;
  for(int i = 0; i < n; i++){
   if(a[i] > mid) sum += a[i] -mid;
  }
  if(sum >= l){
   cnt = mid;
   left = mid + 1;
  }
  else{
   right = mid -1;
  }
 }
 cout << cnt;

     

}