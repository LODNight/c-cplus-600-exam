#include <stdio.h>
#include <math.h>
#include "nhapxuat.h"
#include "kythuattinhtong.h"
#include "nhapxuat.cpp"
#include "kythuattinhtong.cpp"

int main(){
    int a[100];
    int n;
    float b[100];
    int m;

    // NhapMang(a,n);
    // XuatMang(a,n);

    // int kq = DemMangConTang(a,n);
    // printf("\nKet qua la: %d",kq);

    NhapMangSoThuc(b,n);
    XuatMangSoThuc(b,n);
    TimGiaTriLonNhatLaSoThuc(b,n);

    return 0;
}