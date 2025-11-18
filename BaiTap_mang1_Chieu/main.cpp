#include <stdio.h>
#include <math.h>
#include "nhapxuat.h"
#include "nhapxuat.cpp"
#include "kythuattinhtong.h"
#include "kythuattinhtong.cpp"
#include "p4_TimKiemLietKe_176_199/timKiemLietKe.h"
#include "p4_TimKiemLietKe_176_199/timKiemLietKe.cpp"

int main(){
    int a[100];
    int n;
    float b[100];
    int m;

    // -------------------
    NhapMang(a,n);
    XuatMang(a,n);

    // int kq = soNguyenToNhoNhatLonHonMoiGiaTri(a,n);
    // printf("\nKet qua la: %d",kq);
    lietKeCacGiaTriLonHonGiaTriKeTiep(a,n);
    // -------------------


    // -------------------
    // float a_thuc[100];
    // NhapMangSoThuc(a_thuc,n);
    // XuatMangSoThuc(a_thuc,n);

    // float kq = viTriGiaTriBangTichLanCan(a_thuc,n);
    // printf("\nKet qua la: %f",kq);


    // lietKeCacCapGiaTriGanNhau(a_thuc,n);

    // -------------------

    return 0;
}