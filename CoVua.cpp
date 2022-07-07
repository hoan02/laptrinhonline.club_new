#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
 int n,i;
 char a[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("\n%c",&a[i]);
 }
 int dem=0;
 for(i=0;i<n;i++)
 {
  if(a[i]=='t') dem++;
  if(a[i]=='M') dem+=3;
  if(a[i]=='T') dem+=3;
  if(a[i]=='X') dem+=5;
  if(a[i]=='H') dem+=9;
  if(a[i]=='V') dem+=0;
 }
 printf("%d",dem);
 
}