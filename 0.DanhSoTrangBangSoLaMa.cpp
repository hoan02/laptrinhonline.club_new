#include<stdio.h>
#include<string.h>
main() {    
    char tram[][10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char chuc[][10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char dvi[][10] ={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    int n;
 scanf("%d", &n);
    int t1 = n%10;
    n /= 10;
    int t2 = n%10;
    n /= 10;
    int t3 = n%10;
    printf("%s%s%s", tram[t3], chuc[t2], dvi[t1]);
}