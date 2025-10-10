#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n,m;
    // printf("Nhập n: ");
    // scanf("%d",&n);
    // printf("Nhập m: ");
    // scanf("%d",&m);

    // int result = tongCacSoNguyenToNhoHonN(n);
    // printf("Kết quả: %d",result);
    double a,b,c;
    printf("Nhập a: ");
    scanf("%lf",&a);
    printf("Nhập b: ");
    scanf("%lf",&b);
    printf("Nhập c: ");
    scanf("%lf",&c);
    thayDoiSoAm(a, b, c);

    return 0;
}