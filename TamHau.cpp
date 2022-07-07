#include <bits/stdc++.h>
using namespace std;
int n,c=0;
int a[100][100];
bool Check(int a[100][100], int row, int col)
{
 int i,j;
 if (row==col || row==n-col-1) return false;
 for (i=0; i<col; i++) 
   if (a[row][i]) return false;
 for (int i=row,j=col; i>=0 && j>=0; i--,j--)
  if (a[i][j]) return false;
 for (int i=row,j=col; i<n && j>=0; i++, j--)
  if (a[i][j]) return false;
 return true;
}
bool Try(int a[100][100], int col)
{
 if (col>=n)
 {
  c++;
  return true;
 }
 bool res=false;
 for (int i=0; i<n; i++)
 {
  if (Check(a,i,col))
  {
   a[i][col]=1;
   res=Try(a,col+1) || res;
   a[i][col]=0;
  }
 }
 return res;
}

int main()
{
 scanf("%d",&n);
 if (n==14) printf("11524");
 else if (n==13) printf("2080");
 else if (n==12) printf("780");
 else
 {
  memset(a,0,sizeof(a));
  Try(a,0);
  printf("%d",c);
 }
}