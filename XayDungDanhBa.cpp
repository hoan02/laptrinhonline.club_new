#include<iostream>
using namespace std;
#define ll long long

char cmd[10], a[33];

struct Node {
 ll code1, code2, cnt;
 Node *next;
};

Node pool[3000005];
int pool_size = 0;

Node* create(ll c1, ll c2, ll v) {
 Node *tmp = &pool[pool_size++];
 tmp->code1 = c1, tmp->code2 = c2, tmp->cnt = v;
 tmp->next = 0;
 return tmp;
}

const int N = 1 << 17;
Node *table[N + 1];

void addToHash(ll c1, ll c2, ll v) {
 int id = (int)(c1 & (N - 1));
 Node *cur = table[id];
 for(; cur; cur = cur->next) if(cur->code1 == c1 && cur->code2 == c2) {
  cur->cnt += v;
  return;
 }
 cur = create(c1, c2, v);
 cur->next = table[id];
 table[id] = cur;
}

ll get(ll c1, ll c2) {
 int id = (int)(c1 & (N - 1));
 Node *cur = table[id];
 for(; cur; cur = cur->next) 
  if(cur->code1 == c1 && cur->code2 == c2) return cur->cnt;
 return 0;
}

int main() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int n; cin >> n;
 while(n--) {
  cin >> cmd >> a;
  if(cmd[0] == 'a') {
   ll c1 = 0, c2 = 0;
   for(char *s = a; *s; ++s) {
    c1 = c1 * 31L + *s;
    c2 = c2 * 103L + *s;
    addToHash(c1, c2, 1);
   }
   addToHash(c1, c2, 1);
  }
  else {
   ll c1 = 0, c2 = 0;
   for(char *s = a; *s; ++s) {
    c1 = c1 * 31L + *s;
    c2 = c2 * 103L + *s;
   }
   cout << get(c1, c2) << '\n';
  }
 }
 return 0;
}