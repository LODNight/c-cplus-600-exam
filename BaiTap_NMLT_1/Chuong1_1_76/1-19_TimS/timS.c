#include <stdio.h>
#include <math.h>

int TimS_Bai1(int n){
    int tong = 0;
    int i = 1;
    while (i<=n){
        tong += i;
        i++;
    }
    return tong;
}

int TimS_Bai2(int n){
    int tong = 0;
    for(int i=0; i<=n; i++){
        tong += (i*i);
    }
    return tong;
}

float TimS_Bai3(int n){
    float tong = 0;
    for(int i=1;i<=n;i++){
        tong += 1.0/i;
    }
    return tong;
}

float TimS_Bai4(int n){
    int i;
    float tong = 0;
    for(i=2;i<=n;i++){
        tong += 1.0/(2*i);
    }
    return tong;
}

float TimS_Bai5(int n){
    float tong = 0;
    for(int i=1;i<=n;i++){
        tong += 1.0 / (2*i + 1);
    }
    return tong;
}

float TimS_Bai6(int n){
    float tong = 0;
    for(int i=1;i<=n;i++){
        tong += 1.0/(i*(i+1));
    }
    return tong;
}

float TimS_Bai7(int n){
    float tong = 0;
    for(int i=1; i<=n; i++){
        tong += i*1.0/(i+1);
    }
}

float TimS_Bai8(int n){
    float tong = 0;
    for(int i=1;i<=n;i++){
        tong += (2.0*i) / (2.0*i +1);
    }
    return tong;
}

int TimS_Bai9(int n){
    int tich = 1;
    for(int i=1;i<=n;i++){
        tich *= i;
    }
    return tich;
}

int TimS_Bai10(int n){
    int x;
    int tich = 1;
    for(int i=1;i<=n;i++){
        tich *= x;
    }
    return tich;
}

int TimS_Bai11(int n){
    int tong = 0;
    int giaiThua = 1;
    for(int i=1; i<=n; i++){
        giaiThua *= i;
        tong += giaiThua;
    }
    return tong;
}

int TimS_Bai12(int n){
    int x;
    int tong = 0;
    int mu = 1;
    for(int i=1;i<=n;i++){
        mu *= x;
        tong += mu;
    }
    return tong;
}

int TimS_Bai13(int n){
    int x;
    int tong = 0;
    int mu = 1;
    for(int i=1;i<=n;i++){
        mu *= (x*x);
        tong += mu;
    }
    return tong;
}

int TimS_Bai14(int n){
    int x;
    int tong = 0;
    int mu = x;
    for(int i=1;i<=n;i++){
        tong += mu;
        mu *= (x*x);
    }
    return tong;
}

float TimS_Bai15(int n){
    float tong = 0;
    int dem = 0;
    for(int i=1; i<=n; i++){
        dem += i;
        tong += 1.0/dem;
    }
    return tong;
}

float TimS_Bai16(int n){
    int x;
    float tong = 0;
    int dem = 0;
    int mu = 1;
    for(int i=1;i<=n;i++){
        mu *= x;
        dem += i;
        tong += mu*1.0/dem;
    }
    return tong;
}

float TimS_Bai17(int n){
    int x;
    float tong = 0;
    int giaiThua = 1;
    int mu = 1;
    for(int i=1; i<=n; i++)
    {
        giaiThua *= i;
        mu *= x;
        tong += (1.0*mu/giaiThua);
    }
    return tong;
}

float TimS_Bai18(int n){
    int x;
    float tong = 1;
    int giaiThua = 1;
    int term = 1;
    for(int i=1; i<=n*2; i++)
    {
        giaiThua *= i;
        term *= x;
        if(i%2 == 0)
            tong = tong + (1.0*term/giaiThua);
    }
    return tong;
}

float TimS_Bai19(int n){
    int x;
    float tong = 1;
    int giaiThua = 1;
    int term = x;
    for(int i=1; i<=n*2+1; i++)
    {
        giaiThua *= i;
        if(i%2 != 0)
        {
            tong = tong + (1.0*term/giaiThua);
            term *= (x*x);
        }
    }
    return tong;
}
