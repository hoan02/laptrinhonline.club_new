#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
 int n;
 scanf("%d",&n);
 fflush(stdin);
 char s[1007];
 for (int i=1;i<=n;i++) {
  scanf("%s",s);
  int leng=strlen(s);
  int tongchan=0,tongle=0;
  for (int i=0;i<leng;i++) {
   if (i%2==0) tongle+=s[i]-'0';
   else tongchan+=s[i]-'0';
   }
  if ((tongle-tongchan)%11==0) printf("YES\n");
  else printf("NO\n");
  }
}