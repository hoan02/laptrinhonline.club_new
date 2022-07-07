#include<stdio.h>
#include<string.h>
main(){
 char s[][7]={"fechou", "clicou"}, t[7];
 int n, m;
 scanf("%d %d", &n, &m);
 int dong=0, qc=0;
 while(m--){
  scanf("%s", t);
  if(strcmp(t, s[0])==0)
   dong++;
  else
   qc++;
 }
 printf("%d", n+dong-qc);
}