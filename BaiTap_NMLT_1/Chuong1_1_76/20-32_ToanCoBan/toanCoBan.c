#include <stdio.h>
#include <math.h>


int lietKeUocSo(int n){
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}

int tongUocSo(int n){
    int tong = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            tong += i;
        }
    }
    return tong;
}

int tichUocSo(int n){
    int tich = 1;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            tich *= i;
        }
    }
    return tich;
}

int demUocSo(int n){
    int dem = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            dem++;
        }
    }
    return dem;
}