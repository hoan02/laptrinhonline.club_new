#include<bits/stdc++.h>
using namespace std;
struct sudoku{
 int a[9][9],kt=0;
 void nhap(){for(int i=0;i<9;i++) for(int j=0;j<9;j++) cin>>a[i][j];}
 void xuat(){
  for(int i=0;i<9;i++) {
   for(int j=0;j<9;j++) cout<<a[i][j]<<" ";
   cout<<"\n";
  } 
 }
 bool dienduoc(int u,int v,int t){
  for(int k=0;k<9;k++) if(a[u][k]==t || a[k][v]==t) return 0;
  for(int i=u/3*3;i<u/3*3+3;i++) for(int j=v/3*3;j<v/3*3+3;j++) if(a[i][j]==t) return 0;
  return 1;
 }
 void TRY(int u,int v){
  if(kt) return;
  if(u>8) {xuat(),kt=1;return;}
  if(a[u][v]) TRY(u+v/8,(v+1)%9);
  else for(int t=1;t<=9;t++)
  if(dienduoc(u,v,t)){
   a[u][v]=t; TRY(u+v/8,(v+1)%9);
   a[u][v]=0;
  }
 }
};
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 sudoku s;s.nhap();s.TRY(0,0);
}