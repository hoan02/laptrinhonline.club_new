#include<stdio.h>
int main()
{
    char kl[][30]={
    "Khong co","Thang Mot","Thang Hai","Thang Ba","Thang Tu","Thang Nam","Thang Sau",
    "Thang Bay","Thang Tam","Thang Chin","Thang Muoi","Thang Muoi mot","Thang Muoi hai"};
    int n;
    scanf("%d",&n);
    if(n<0||n>12) n=0;
    printf("%s",kl[n]);
}