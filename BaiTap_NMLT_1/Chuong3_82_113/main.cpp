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
    double d,e,f;
    // printf("Nhập a: ");
    // scanf("%lf",&a);
    // printf("Nhập b: ");
    // scanf("%lf",&b);
    // printf("Nhập c: ");
    // scanf("%lf",&c);

    printf("Nhập a,b,c (pt1 = ax + by = c)");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Nhập d,e,f (pt2 = dx + ey = f)");
    scanf("%lf %lf %lf",&d,&e,&f);

    tinhHePhuongTrinh(a,b,c,d,e,f);

    return 0;
}