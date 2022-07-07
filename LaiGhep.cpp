#include<bits/stdc++.h>
using namespace std;
char x[20]={},y[20]={},z[20]={};
int n;

void TRY(int k)
{
 if(k==n) printf("%s\n",z);
 else
 {
  z[k]=x[k]; TRY(k+1);
  if(y[k]!=x[k]) {z[k]=y[k]; TRY(k+1);}
 }
}

int main()
{
 scanf("%s%s",x,y);
 n=strlen(x);
 for(int i=0;i<n;i++) if(x[i]>y[i]) swap(x[i],y[i]);
 TRY(0);
}