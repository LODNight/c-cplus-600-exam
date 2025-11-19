#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// -------------------------
// 	Bài 200: Tính tổng các phần tử trong mảng
int tongCacPhanTu(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực
int tongCacGiaTriDuongSoThuc(int a[100], int n){
    if(n<1) return 0;
    float total = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            total += a[i];
        }
    }
    return total;
}

// -------------------------
// 	Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên
bool chuSoDauTienLe(int n){
    while(n >= 10){
        n/=10;
    }   
    return (n % 2 != 0);
}

int tongGiaTriCoChuSoDauTienLe(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        if(chuSoDauTienLe(a[i])) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 203: Tinh tổng các chữ số có chữ số hàng chục là 5 trong mảng 1 chiều các số nguyên
bool chuSoHangChucLa5(int n){
    if(n<10) return false;
    int d = 0;
    while(n >= 10){
        d = n % 10;
        n /= 10;
    }
    return (d==5);
}

int tongGiaTriCoChuSoHangChucLa5(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        if(chuSoHangChucLa5(a[i])) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 204: Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng 1 chiều các số thực
int tongGiaTriLonHonGiaTriTruocNo(int a[100], int n){
    if(n < 2) return 0;
    int total = 0;
    for(int i=1; i < n; i++){
        if(a[i] > a[i-1]) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 205: Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
int tongGiaTriLonHonTriTuyetDoiLienSau(int a[100], int n){
    if(n < 2) return 0;
    int total = 0;
    for(int i=0; i < n-1; i++){
        if(a[i] > abs(a[i-1])) total += a[i];
    }   
    return total;
}