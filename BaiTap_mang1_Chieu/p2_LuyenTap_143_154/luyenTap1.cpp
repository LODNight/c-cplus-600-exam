#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Kiểm tra số Nguyên tố
bool soNguyenTo(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
       if(n % i == 0){
            return false;
       } 
    }
    return true;
}

// Kiểm tra số hoàn thiện
bool soHoanThien(int n){
    if(n <= 0) return false;
    int tong = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            tong += i;
            if(i == n/i){
                tong += n/i;
            }
        }
    }
    return tong == n;
}

// -------------------------
// 	Bài 143: Viết hàm tìm số chẵn đầu tiên trong mảng các số nguyên. Nếu mảng không có giá trị chẵn thì trả về  -1
int timSoChanDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] % 2 == 0){
            return a[i];
        }
    } 
    return -1;
}

// -------------------------
// Bài 144: Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  – 1
int timSoNguyenToDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        if(soNguyenTo(a[i]))
            return a[i];
    }
    return -1;
}

// -------------------------
// 	Bài 145: Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
int timSoHoanThienDauTien(int a[100], int n){
    for(int i=0; i < n; i++){
        // soHoanThien(a[i])
        int tong = 1;
        for(int j=2; j < sqrt(a[i]); j++){
            if(a[i] % j == 0){
                tong += j;
                if(j != a[i] / j){
                    tong += a[i] / j;
                }
            }
        }
        if(tong == a[i])
            return a[i];
    }
    return -1;
}

// -------------------------
// 	Bài 146: Tìm giá trị âm đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về -1
float timSoAmDauTienTrongMangSoThuc(float a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            return a[i];                
        }
    }
    return -1;
}

// -------------------------
// 	Bài 147: Tìm số dương cuối cùng trong mảng số thực. Nếu mảng không có giá trị dương thì trả về  -1
int timSoDuongCuoiCungTrongMangSoThuc(float a[100], int n){
    for(int i=n-1; i > 0; i--){
        if(a[i] > 0)
            return a[i];
    }
    return -1;
}

// -------------------------
// 	Bài 148: Tìm số nguyên tố cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  -1
int soNguyenToCuoiCung(int a[100], int n){
    for(int i=n-1; i > 0; i--){
        if(soNguyenTo(a[i]))
            return a[i];
    }
    return -1;
}

// -------------------------
// 	Bài 149: Tìm số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
int timSoHoanThienCuoiCung(int a[100], int n){
    for(int i=n-1; i > 0; i--){
        if(soHoanThien(a[i]))
            return a[i];
    }
    return -1;
}


// -------------------------
// 	Bài 150: Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về  -1
float giaTriAmLonNhatSoThuc(float a[100], int n){
    bool soAm = false;
    float min;
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            if(!soAm){
                soAm = true;
                min = a[i];
            }
            else if(a[i] < min){
                min = a[i];
            }
        }
    }
    if(soAm)
        return min;
    else
        return -1;
}

// -------------------------
// 	Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1
int soNguyenToLonNhat(int a[100], int n){
    int max;
    bool snt = false; 
    for(int i=0; i < n; i++){
        if(soNguyenTo(a[i])){
            if(!snt){
                snt = true;
                max = a[i];
            }
            else if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(snt)
        return max;
    else 
        return -1;
}

// -------------------------
// 	Bài 152: Hãy tìm số hoàn thiện nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về -1
int soHoanThienNhoNhat(int a[100], int n){
    bool sht = false;
    int max;
    for(int i=0; i < n; i++){
        if(soHoanThien(a[i])){
            if(!sht){
                max = a[i];
                sht = true;
            } 
            else if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(sht) return max;
    else return -1;
}

// -------------------------
// 	Bài 153: Hãy tìm giá trị chẵn nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số chẵn thì trả về -1
int giaTriChanNhoNhatTrongMang1Chieu(int a[100], int n){
    int min;
    bool soChan = false;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
           if(!soChan){
                soChan = true;
                min = a[i];
            } 
            else if(a[i] < min){
                min = a[i];
           }
        }
    }
    if(soChan) return min;
    else return -1;
}

// -------------------------
// 	Bài 154: Hãy tìm vị trí giá trị âm nhỏ nhất trong mảng các số thực. Nếu mảng không có số âm thì trả về -1
int viTriSoThucAmNhoNhat(float a[100], int n){
    bool soAm = false;
    float min;
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            if(!soAm){
                min = a[i];
                soAm = true;
            }
            else if(a[i] < min){
                min = a[i];
            }
        }
    }
    if(soAm) return min;
    else return -1;
}
