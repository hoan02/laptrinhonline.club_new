#include<stdio.h>
char x[1000];
int n;
void TRY(int k){
    if(k==n){
        printf("%s\n",x+1);
        return;
    }
        x[k+1]='0'; TRY(k+1);
        x[k+1]='1'; TRY(k+1);

}
int main(){
    scanf("%d",&n);
    TRY(0);
}