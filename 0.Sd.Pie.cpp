#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define PI  3.1415926535897932
double a[10005];
const double e=1e-6;  
double rx,lx;
int n,m;
int main()
{
      int T;
      scanf("%d",&T);
      while(T--)
      {

        lx=0;rx=0;
        scanf("%d%d",&n,&m);
         m+=1;
         for(int i=1;i<=n;i++)
        {
            scanf("%lf",&a[i]);
            a[i]*=a[i];
            rx=max(rx,a[i]);
        }

         double mid;
          while(rx-lx>e)
        {
            mid=(rx+lx)/2;
            int cnt=0;
           for(int i=1;i<=n;i++)
           {
             cnt+=(int)(a[i]/mid);
           }
           if(cnt<m) rx=mid;
           else lx=mid;
       }
       printf("%.4f\n",mid*PI);



      }

}