#include <bits/stdc++.h>
using namespace std;
string add(string a, string b)
{
 string c="";
 int carry=0;
 while (a.length()<b.length()) a='0'+a;
 while (b.length()<a.length()) b='0'+b;
 for(int i=a.length()-1;i>=0;i--)
 {
  int x=(int)(a[i]-48);
  int y=(int)(b[i]-48);
  int sum=x + y + carry;
  carry=sum/10;
  c=(char)(sum%10+48)+c;
 }
 if (carry>0) c='1'+c;
 return c;
}

int main()
{
 string a, b;
 cin>>a>>b;
 cout<<add(a,b);
 return 0;
}