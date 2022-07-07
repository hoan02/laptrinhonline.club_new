#include <bits/stdc++.h>
using namespace std;
struct SV {
 char ten[50], gioi[10];
 int ngay, thang, nam;
 int id;
};
bool cmp(SV a, SV b) {
 if(a.nam!=b.nam) return a.nam<b.nam;
 if(a.thang!=b.thang) return a.thang<b.thang;
 if(a.ngay!=b.ngay) return a.ngay<b.ngay;
 return a.id<b.id;
}
int main()
{
 int n=0;
 SV a[10005];
 while(scanf("%[^0-9]", a[n].ten)!=EOF) {
  scanf("%d/%d/%d %s\n", &a[n].ngay, &a[n].thang, &a[n].nam, a[n].gioi);
  a[n].id = n;
  n++;
 }
 sort(a, a+n, cmp);
 for(int i=0;i<n;i++) {
  cout<<a[i].ten<<a[i].ngay<<"/"<<a[i].thang<<"/"<<a[i].nam<<" "<<a[i].gioi<<"\n";
 }
}