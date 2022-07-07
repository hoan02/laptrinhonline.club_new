#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int x[205],N,K1,K2; 
char s[2000]; 
void inkq(int *x,int k) { 
    int t=0; 
    for(int i=1;i<=k;i++) { 
        if(x[i]==0) { 
            s[t++]='0'; 
            
        } else {
            for(int j=1;j<=x[i];j++) 
            s[t++]='1'; }
            
}printf("%s\n",s); 
    
} 
void TRY(int k,int m) { 
    if(m==N) { 
        inkq(x,k); 
        return; 
        
    } 
    if(x[k]==0) { 
        for(int t=K1;t<=K2&&m+t<=N;t++) {
            x[k+1]=t; 
            TRY(k+1,m+t); 
            
        } 
        
    } else { 
        x[k+1]=0; 
        if(N-k-1==0||N-k-1>=K1) 
        TRY(k+1,m+1); 
        
    } 
    
} int main() { 
    scanf("%d %d %d",&N,&K1,&K2); 
    s[N]=0; 
    x[1]=0;
    TRY(1,1); 
    x[0]=0 ;
    TRY(0,0);
}