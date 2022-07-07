#include<stdio.h>
#include<string.h>
int kim_lau(char s[]){
 int i, tong=0, n=strlen(s);
 char a[1000];
 for(i=0; i<n; i++)
  tong += (int)s[i]-48;
 sprintf(a, "%d", tong);
 if(strlen(a)==1)
  return a[0]-48;
 return kim_lau(a);
}
main(){
 char s[1000000];
 scanf("%s", s);
 printf("%d", kim_lau(s));
}