#include <stdio.h>
#include "kiemtraChuoi.h"
#include "kiemtraChuoi.c"

int main(){
    int i,n,m;
    printf("Nhập dãy số n: ");
    scanf("%d", &n);

    if(n <= 0) return 1;

    int a = kiemTraSoGiamDan(n);
    if(a==0){
        printf("%d đúng",n);
    } else {
        printf("%d ko phải số ",n);
    }
}


