#include<stdio.h>

int main(){
    char can[10][10]={"canh","tan","nham","quy","giap","at","binh","dinh","mau","ky"};
    char chi[12][10]={"than","dau","tuat","hoi","ti","suu","dan","mao","thin","ty","ngo","mui"};
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
    for(int i=0;i<n;i++){
     int thu_tu_can = a[i]%10;
        int thu_tu_chi = a[i]%12;
        printf("%s %s\n", can[thu_tu_can], chi[thu_tu_chi]);
 }
}