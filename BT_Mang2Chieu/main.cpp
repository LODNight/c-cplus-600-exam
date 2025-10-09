#include <stdio.h>
#include "nhapMang.h"
#include "maTran.h"
#include "nhapMang.cpp"
#include "maTran.cpp"

int main(){
    int a[20][20];
    int nA,mA;
    int b[20][20];
    int nB,mB;
    nhapMaTran(a,nA,mA);
    xuatMaTran(a,nA,mA);
    nhapMaTran(b,nB,mB);
    xuatMaTran(b,nB,mB);

    // int k = demPhanTuCucDai(a,n,m);
    bool kq = kiemTraMaTranCon(a,nA,mA,b,nB,mB);
    printf("\nKết quả là: %d\n");

}