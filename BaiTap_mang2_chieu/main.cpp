#include <stdio.h>
#include <math.h>
#include "nhapXuat/nhapxuat.h"
#include "nhapXuat/nhapxuat.cpp"
#include "p1_MaTran_311_428/maTran.h"
#include "p1_MaTran_311_428/maTran.cpp"

int main(){
    // ===================
    // int a[100][100];
    // int n,m;
    // nhapMang2Chieu(a,n,m);
    // xuatMang2Chieu(a,n,m);
    // float kq = ktTonTaiGiaTriChanNhoHon2015(a,n,m);
    // printf("\nKet qua la: %.2f", kq);
    
    // ===================

    float a[100][100];
    int n,m;
    nhapMang2ChieuSoThuc(a,n,m);
    xuatMang2ChieuSoThuc(a,n,m);

    float kq = demSLGiaTriPhanBiet(a,n,m);
    printf("\nKet qua la: %.2f", kq);

    // tichGiaTriDuongTren1CotMaTranSoThuc(a,n,m);
    // printf("\n");
    // xuatMang2ChieuSoThuc(a,n,m);

    // ===================

    return 0;
}