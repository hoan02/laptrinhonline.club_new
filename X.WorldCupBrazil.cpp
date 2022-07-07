#include<stdio.h>
using namespace std;
int main()
{
 int a;
 while((scanf("%d",&a))!=EOF)
 {
    if(a!=0) 
     printf("Co khieu nai!\n");
    else
     printf("Khong khieu nai!\n");
 }
}