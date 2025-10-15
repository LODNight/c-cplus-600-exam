#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n,m;
    // printf("Nhập n: ");
    // scanf("%d",&n);
    // printf("Nhập m: ");
    // scanf("%d",&m);

    // double result = tinhGiaTriHamSo(n);
    // printf("Kết quả: %lf",result);

    double a,b,c;
    printf("Nhập a: ");
    scanf("%lf",&a);
    printf("Nhập b: ");
    scanf("%lf",&b);
    printf("Nhập c: ");
    scanf("%lf",&c);

    ptBac2(a,b,c);

    return 0;
}