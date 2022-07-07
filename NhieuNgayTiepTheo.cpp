#include<stdio.h>
struct ngay{
 int ngay;
 int thang;
 int nam;
};
int ktnhuan(struct ngay x)
{
 if(x.nam % 4 == 0 && x.nam % 100 != 0)
 return 1;
 if(x.nam % 400 == 0)
 return 1;
 return 0;
}
struct ngay ketiep(struct ngay x)
{
 
 int ngaythang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 if(ktnhuan(x)==1)
 ngaythang[1]=29;
 x.ngay++;
 if(x.ngay>ngaythang[x.thang-1]){
  x.thang++;
  if(x.thang>12){
   x.nam++;
   x.thang=1;
  }
  x.ngay=1;
 }
 return x;
}
int main() {
 struct ngay a;
 scanf("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
 int n;
  scanf("%d", &n);
 for (int i=0;i<n;i++)
 {struct ngay kq=ketiep(a);
 printf("%d/%d/%d\n", kq.ngay, kq.thang, kq.nam);
 a.ngay=kq.ngay;
 a.thang=kq.thang;
  a.nam=kq.nam;
 }
 
 
}