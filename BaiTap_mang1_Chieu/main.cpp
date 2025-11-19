#include <stdio.h>
#include <math.h>
#include "nhapxuat.h"
#include "nhapxuat.cpp"
#include "kythuattinhtong.h"
#include "kythuattinhtong.cpp"
#include "p5_TinhTong_200_215/tinhTong.h"
#include "p5_TinhTong_200_215/tinhTong.cpp"

int main(){
    int a[100];
    int n;
    float b[100];
    int m;

    // -------------------
    NhapMang(a,n);
    XuatMang(a,n);

    int kq = tongGiaTriCucTri(a,n);
    printf("\nKet qua la: %d",kq);
    // lietKeCacGiaTriLonHonGiaTriKeTiep(a,n);

    // chuSoHangChucLa5(2505);
    // -------------------


    // -------------------
    // float a_thuc[100];
    // NhapMangSoThuc(a_thuc,n);
    // XuatMangSoThuc(a_thuc,n);

    // float kq = viTriGiaTriBangTichLanCan(a_thuc,n);
    // printf("\nKet qua la: %f",kq);

    // lkViTriBanhGiaTriDuongDauTienNhoNhat(a_thuc,n);

    // -------------------

    return 0;
}