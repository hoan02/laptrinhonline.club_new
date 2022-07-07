#include <bits/stdc++.h>
using namespace std;
int x,v[100000]={};
struct node{
 int data;
 node *left;
 node *right;
 node(int _data, node *_left = NULL, node *_right = NULL)
 {
  data = _data;
  left = _left;
  right = _right;
 }
};
void add(node *&root, int data, int dem=0)
{
 if(root == NULL) root = new node(data);
 else
 {
  if(data > root->data)
  {
   if(root->right == NULL) root->right = new node(data);
   else add(root->right, data, ++dem);
  }
  else if(data < root->data)
  {
   if(root->left == NULL) root->left = new node(data);
   else add(root->left, data, ++dem);
  }
 }
 
}
void preOrder(node *T, int vitri = 0)
{
 if(T != NULL)
 {
  v[T->data] = vitri;
  //printf("%d %d\n",T->data, v[T->data]);
  preOrder(T->left, ++vitri);
  preOrder(T->right, vitri);
 }
}
void inOrder(node *T)
{
 if(T != NULL)
 {
  inOrder(T->left);
  printf("%d %d\n",T->data, v[T->data]);
  inOrder(T->right);
 }
}

void solve(int n)
{
 node *root=NULL;
 for(int i=0; i<n; i++){
  cin >> x;
  if(v[x]==0){
   add(root, x);
  }
  v[x]++;
 }
 preOrder(root, 0);
 inOrder(root);
}

int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 int n;
 cin >> n;
 solve(n);
    return 0;
}