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
float tongCacGiaTriDuongSoThuc(float a[100], int n){
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
float tongGiaTriLonHonGiaTriTruocNo(float a[100], int n){
    if(n < 2) return 0;
    float total = 0;
    for(int i=1; i < n; i++){
        if(a[i] > a[i-1]) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 205: Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
int tongGiaTriLonHonTriTuyetDoiLienSau(int a[100], int n){
    if(n < 2) return 0;
    float total = 0;
    for(int i=0; i < n-1; i++){
        if(a[i] > abs(a[i-1])) total += a[i];
    }   
    return total;
}

// -------------------------
// 	Bài 206: Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng 1 chiều các số thực
// 	 Lưu ý: Một giá trị trong mảng có tối đa 2 giá trị xung quang
int tongGiaTriLonHonCacGiaTriXungQuanh(int a[100], int n){
    if(n < 2) return 0;
    float total = 0;
    for(int i=1; i<n-1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 207: Tính tổng các phần tử “cực trị” trong mảng. Một phần tử được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó
int tongGiaTriCucTri(int a[100], int n){
    if(n < 2) return 0;
    int total = 0;
    for(int i=1; i < n-1; i++){
        // Check lớn hơn
        if(a[i] > a[i-1] && a[i] > a[i+1]) total += a[i];
        // Check nho hon
        else if(a[i] < a[i-1] && a[i] < a[i+1]) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên
bool soChinhPhuong(int n){
    if(n<=0) return false;
    int e = (int)sqrt(n);
    return (e*e == n);
}

int tongSoChinhPhuong(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        if(soChinhPhuong(a[i])) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên
int soDao(int n){
    int temp = abs(n);
    int dao = 0;
    while(temp > 0){
        dao = (dao*10) + (temp % 10);
        temp /= 10;
    }
    return dao;
}

bool soDoiXung(int n){
    int temp = abs(n);
    return temp == soDao(temp);
}

int tongCacGiaTriDoiXung(int a[100], int n){
    if(n < 2) return 0;
    int total = 0;
    for(int i=0; i < n-1; i++){
        if(soDoiXung(a[i])) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các số nguyên
bool chuSoDauTienChang(int n){
    n = abs(n);
    while(n >= 10){
        n/=10;
    }
    return (n % 2 == 0);
}

int tongGiaTriChuSoDauTienChang(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i < n; i++){
        if(chuSoDauTienChang(a[i])) total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 211: Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên
bool soNguyenTo(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

float tbcSoNguyenTo(int a[100], int n){
    if(n < 2) return 0;
    int total = 0;
    int count = 0;
    for(int i=0; i < n; i++){
        if(soNguyenTo(a[i])){
            count++;
            total += a[i];
        }
    }
    if(count < 1) return 0;
    
    return (float)total / count;
}