#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// ================= KỸ THUẬT ĐẶT LÍNH CANH =================

// -------------------------
// Bài 134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
float timGiaTriLonNhatTrongMangSoThuc(float a[100], int n){
    float max = a[0];
    for(int i=0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

// -------------------------
// Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
float timGiaTriDuongDauTienTrongMangSoThuc(float a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] > 0){
            return a[i];
        }
    }
    return -1;
}

// -------------------------
// Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1
int timGiaTriChanCuoiCung(int a[100], int n){
    for(int i=n-1; i > 0; i--){
        if(a[i] % 2 == 0){
            return a[i];
        }
    }
    return -1;
}

// -------------------------
// Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số thực
int timViTriCoGiaTriNhoNhatMangSoThuc(float a[100], int n){
    float min = a[0];
    int vitriMin = 0;
    for(int i=0; i < n; i++){
        if(a[i] < min){
            min = a[i];
            vitriMin = i;
        }
    }
    return vitriMin;
}

// -------------------------
// Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì sẽ trả về -1
int timViTriGiaTriChanDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] % 2 == 0){
            return a[i];
        }
    }
    return -1;
}

// -------------------------
// Kiểm tra số hoàn thiện 
bool soHoanThien(int n){
    if (n <= 0) return 0;
    int tong = 1;
    for(int i=2; i < sqrt(n); i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    return tong == n;
}

// -------------------------
// Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
// Note: Số hoàn thiện = Tổng các ước số dương của chính nó
int timViTriSoHoanThienCuoiCung(int a[100], int n){
    for(int i=n-1; i > 0; i--){
        if(soHoanThien(a[i])){
            return i;
        }
    }
    return -1;
}

// -------------------------
// Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1
float timSoNhoNhatTrongMangSoThuc(float a[100], int n){
    float min;
    bool soDuong = false;
    // Kiểm tra số dương
    for(int i=0; i < n; i++){
        if(a[i] > 0){
            if(!soDuong){
                min = a[i];
                soDuong = true;
            } else if (a[i] < min)
            {
                min = a[i];
            }
        }
    }
    if(soDuong){
        return min;
    } else{
        return -1;
    }
    
}

// -------------------------
// 	Bài 141: Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về  -1
int timViTriSoDuongNhoNhatTrongMangSoThuc(float a[100], int n){
    float min;
    bool soDuong = false;
    int vitriMin;
    for(int i=0; i < n ;i++){
        if(a[i] > 0){
            if(!soDuong){
                soDuong = true;
                min = a[i];
                vitriMin = i;
            }
            else if(a[i] < min){
                min = a[i];
                vitriMin = i;
            }
        }
    }
    if(soDuong){
        return vitriMin;
    } else {
        return -1;
    }

}

// -------------------------
// Bài 142: Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
float timGiaTriNhoNhatMang1Chieu(float a[100], int n){
    float min = a[0];
    for(int i=1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}
