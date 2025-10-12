#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n,m;
    printf("Nhập n: ");
    scanf("%d",&n);
    // printf("Nhập m: ");
    // scanf("%d",&m);

    double result = tinhGiaTriHamSo(n);
    printf("Kết quả: %lf",result);

    return 0;
}