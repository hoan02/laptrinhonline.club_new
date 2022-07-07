#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 char name[20];
 long long a[10]={},res=0;
 scanf("%d",&n);
 while(n--)
 {
  scanf("%s",name);
  switch (name[0])
  {
   case'M':a[0]++;break;
   case'A':a[1]++;break;
   case'R':a[2]++;break;
   case'C':a[3]++;break;
   case'H':a[4]++;break;
  }
 }
 for(int i=0;i<=4;i++)
 for(int j=i+1;j<=4;j++)
 for(int k=j+1;k<=4;k++) 
  res+=a[i]*a[j]*a[k];
 printf("%lld",res);
}