#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// -------------------------
// 	Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
float timSoThucXaNhatSoVoiX(float a[100], int n, int x){
    float max = a[0];
    float kc = fabs(a[0] - x);
    for(int i=0; i < n; i++){
        if(fabs(a[i] - x) > kc){
            max = a[i];
            kc = fabs(a[i] - x);
        }
        
    }
    return max;
}

// -------------------------
// 	Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
float soThucGanNhatVoiX(float a[100], int n, float x){
    float min = a[0];
    float kc = fabs(a[0] - x);
    for(int i=0; i < n; i++){
        if(fabs(a[i] - x) < kc){
            min = a[i];
            kc = fabs(a[i] - x);
        }
    }
    return min;
}

// -------------------------
// 	Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
void giaTriABTrongMang(float a[100], int n){
    float min = a[0];
    float max = a[0];
    for(int i=0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("\n[%.2f, %.2f]", min,max);
}

// -------------------------
// 	Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
// 	5 9 -10 7 6  => x = 10
float timXtrongMangSoThuc(float a[100], int n){
    float max = fabs(a[0]);
    for(int i=0; i < n; i++){
        if(fabs(a[i]) > max){
            max = fabs(a[i]);
        }
    }
    return max;
}

// -------------------------
// 	Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
float giaTriDauTienLonHon2003(float a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] > 2003){
            return a[i]; 
        }
    }
    return -1;
}

// -------------------------
// 	Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giá trị -1. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
float giaTriAmCuoiCungLonHonTru1(float a[100], int n){
    float max;
    bool soAm = false;
    for(int i=0; i < n; i++){
        if(a[i] < 0 && a[i] > -1){
            if(!soAm){
                max = a[i];
                soAm = true;
            } 
            else if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(soAm) return max;
    else return -1;
}

// -------------------------
// 	Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
int giaTriDauTienNamTrongManXY(int a[100], int n, int x, int y){
    for(int i=0; i < n; i++){
        if(a[i] <= y && a[i] >= x){
            return a[i];
        }
    }
    return -1;
}

// -------------------------
// 	Bài 162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: 
// có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận. 
// Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1
int viTriGiaTriBangTichLanCan(float a[100], int n){
    if(n < 2) return -1;
    for(int i=1; i < n-1; i++){
        if((a[i-1] * a[i+1]) == a[i]) 
            return i;
    }
    return -1;
}

// -------------------------
// Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên
// Số chính phương = bình phương 1 số n
bool soChinhPhuong(int n){
    if(n < 0) return false;
    int e = (int) sqrt(n);
    return (e * e == n);
}

int soChinhPhuongDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        if(soChinhPhuong(a[i])) return a[i];
    }
    return -1;
}

// -------------------------
// 	Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh
// số gánh là số đảo ngược của chính nó VD: 121, 12321, 32123
bool soGanh(int n){
    if(n < 0) return -1;
    int dao = 0;
    int i = n;
    while (i > 0){
        dao = (dao * 10) + (i % 10);
        i /= 10;
    }
    return dao == n;
}

int soGanhDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        if(soGanh(a[i])) return a[i];
    }
    return -1;
}