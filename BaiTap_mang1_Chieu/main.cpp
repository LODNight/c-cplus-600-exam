#include <stdio.h>
#include <math.h>
#include "nhapxuat.h"
#include "kythuattinhtong.h"
#include "nhapxuat.cpp"
#include "kythuattinhtong.cpp"

int main(){
    int a[100];
    int n;
    int b[100];
    int m;

    NhapMang(a,n);
    XuatMang(a,n);

    int kq = DemMangConTang(a,n);

    printf("\nKet qua la: %d",kq);

    return 0;
}