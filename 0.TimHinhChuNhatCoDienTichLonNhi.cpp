#include<stdio.h>
#include<math.h>
typedef struct {
 int dai;
 int rong;
 int s;
}dienTich;
main() {
 dienTich hcn[105];
 int n, i, j, dem = 0;
 scanf("%d", &n);
 for(i=0; i<n; i++){
  scanf("%d", &hcn[i].dai);
  scanf("%d", &hcn[i].rong);
  hcn[i].s = hcn[i].dai * hcn[i].rong;
 }
 for(i=0; i<n; i++){
  for(j=i+1; j<n; j++){
   if(hcn[i].s < hcn[j].s){
    dienTich c = hcn[i];
    hcn[i] = hcn[j];
    hcn[j] = c;
   }
  }
 }
 int max;
 for(i=1; i<n; i++){
  if(hcn[i].s != hcn[0].s){
   printf("%d %d", hcn[i].dai, hcn[i].rong);
   dem ++;
   break;
  }
 }
 if(dem == 0)
   printf("NO");
}