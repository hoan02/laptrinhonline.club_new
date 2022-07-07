#include <stdio.h>
#include <math.h>
#define MAX 101

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void HoanVi(int &x, int &y){
    int tmp = x;
    x = y; 
    y = tmp;
}

void SapXep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                HoanVi(a[i], a[j]);
            }
        }
    }
}


int ThuatToan(int a[], int b[], int n){
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(abs(a[i] - a[j]) <= 1){
                b[k]++;
            }else{
                break;
            }
        }
        k++;
    }
    for(int s = 0; s < k;s++){
        SapXep(b, k);
        return b[0];
    }
}

int main(){
    int n;
    int a[MAX], b[MAX];

    do{
        scanf("%d", &n);
    }while(n < 2 || n > 100);
    Nhap(a, n);

    SapXep(a, n);

    for(int k = 0; k < n; k++){
        b[k] = 0;
    }

    printf("%d", ThuatToan(a, b, n));
}