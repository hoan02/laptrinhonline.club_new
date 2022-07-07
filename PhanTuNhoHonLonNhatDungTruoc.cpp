#include<bits/stdc++.h>
using namespace std;
struct node
{
 int elem,num;
 node*L,*R;
 node(int x) {elem=x;num=1;L=R=0;}
};
void update(node *&H,int x)
{
 if(!H) H=new node(x);
 else if(H->elem==x) H->num++;
  else update(x<=H->elem?H->L:H->R,x);
}
void get(node *H,int x,node *&p) //tim node p node lon nhat nho hon x
{
 if(!H) return;
 if(x<=H->elem) return get(H->L,x,p);
 get(H->R,x,p);
 if(p==0) p=H;
}
int main()
{
 int n,x;
 node*H=0;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&x);
  update(H,x);
  node *p=0;
  get(H,x,p);
  if(p==0) printf("0\n");
  else printf("%d %d\n",p->elem,p->num);
 }
}