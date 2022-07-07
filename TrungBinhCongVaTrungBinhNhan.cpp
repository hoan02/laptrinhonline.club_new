#include<stdio.h>
#include<math.h>
int main(){
    int n,d=0,d1=0;
double  a[1000],s=0,s1=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]<0){
            s+=a[i];
            d++;
        }
        else if(a[i]>0){
            s1*=a[i];
            d1++;
        }
    }
    if(d>0 && d1>0){
    printf("%.5lf\n %.5lf",s/(float)d, pow(s1,1.0/d1));
    }else if(d>0 && d1==0){
    printf("%.5lf\nkhong co so duong",s/(float)d);
    }else if(d==0 && d1>0){
    printf("khong co so am\n%.5lf",pow(s1,1.0/d1));
    }else printf("khong co so am\nkhong co so duong");

        }