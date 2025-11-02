#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// -------------------------
// Kiểm tra số nguyên tố
// return True/False
bool KiemTraSoNguyenTo(int n){
    if(n <= 2) return 0;
    for(int i=2; i<n; i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}

// -------------------------
// Tính trung bình cộng các số nguyên tố
// return trung bình cộng
double tbcSoNguyenTo(int a[100], int& n){
    int sum,count;
    for(int i=0; i<n; i++){
        if(KiemTraSoNguyenTo(a[i])==1){
            sum += a[i];
            count++;
        }
    }
    if (count==0) return 0;

    return 1.0 * sum / count;
}

// -------------------------
// Tìm số Âm đầu tiên trong mảng số nguyên
// return vị trí / -1 nếu ko tìm thấy
int timSoAmDauTien(int a[100], int n){
    int vitri;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            return i;
        }
    }
    return -1;
}

// -------------------------
// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
void TimGiaTriLonNhatLaSoThuc(float a[100], int n){
    float max = a[0];
    for(int i=0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("So lon nhat la %f",max);
}

// -------------------------
// Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên
int timViTriCoGiaTriNhoNhat(int a[100], int n){
    int min = a[0];
    int vitriMin = 0;
    for(int i=1; i < n; i++){
        if(a[i] < min){
            min = a[i];
            vitriMin = i;
        }
    }
    return vitriMin;
}

// -------------------------
// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
bool kiemTraGiaTriChanNhoHon2004(int a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] < 2004 && a[i] % 2 == 0){
            return true;
        }
    }
    return false;
}

// -------------------------
// Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng
int demSoLuongSoNguyenTo(int a[100], int n){
    int count = 0;
    for(int i=0; i < n; i++){
        if(KiemTraSoNguyenTo(a[i]) && a[i] < 100){
            count++;
        }
    }
    return count;
}

// -------------------------
// Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực
int tongCacSoThucAm(float a[100], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            count++;
        }
    }
    return count;
}

// -------------------------
// Thống kê Phần tử trong mảng
void thongKePhanTuTrongMang(int a[100], int n){
    if(n<=0) 
        printf("Ko có phần tử");

    for(int i=0; i<n; i++){
        // Kiểm tra đã có chu
        bool chuaThongKe = true;
        for(int j = 0; j<n; j++){
            if(a[j] == a[i]){
                chuaThongKe = false;
                break;
            }
        }

        // Thống kê số lần lặp
        if(chuaThongKe){
            int dem = 0;
            for(int j=i; j<n; j++){
                if(a[i] == a[j]){
                    dem += 1;        
                }
            }
            printf("\n[%d] Xuất hiện %d lần",a[i],dem);
        }
    }
}

// -------------------------
// Sắp xếp mảng 1 chiều các số nguyen tăng dần
void SapXepMang1ChieuTangDan(int a[100], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n ; j++){
            if(a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

// -------------------------
// Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thục tăng dần
void SapXepMang1ChieuTangDanTheoSoThuc(float a[100], int n){
    float t = 0;
    for(int i=0; i < n-1; i++){
        for(int j=i+1; j < n; j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t; 
            }
        }
    }
}


// -------------------------
int TimSoXuatHienItNhat(int a[100], int n){
    int soLanXuatHien[10] = { 0 };
    for(int i = 0; i < n; i++){
        int k = abs(a[i]);
        if(k==0) soLanXuatHien[0]++;
        while(k > 0){
            int d = k % 10;
            soLanXuatHien[d]++;
            k /= 10;
        }
    }
    int chuSoXuatHienItNhat;
    int soLanXuaHienItNhat = 0;

    for(int i = 0; i <= 9; i++){
        if(soLanXuatHien[i] > 0){
            if(soLanXuaHienItNhat == 0 || soLanXuatHien[i] < soLanXuaHienItNhat){
                chuSoXuatHienItNhat = i;
                soLanXuaHienItNhat = soLanXuatHien[i];
            }
        }
    }
    return chuSoXuatHienItNhat;
}

// -------------------------
void TimChuSoXuatHienItNhat(int a[100], int n, int chuSoItNhat[10], int m){
     int soLanXuatHien[10] = { 0 };
    for(int i = 0; i < n; i++){
        int k = abs(a[i]);
        if(k==0) soLanXuatHien[0]++;
        while(k > 0){
            int d = k % 10;
            soLanXuatHien[d]++;
            k /= 10;
        }
    }
    m = 0;
    int soLanXuaHienItNhat = -1;

    for(int i = 0; i <= 9; i++){
        if(soLanXuatHien[i] > 0){
            if(soLanXuaHienItNhat == -1 || soLanXuatHien[i] < soLanXuaHienItNhat){
                
                soLanXuaHienItNhat = soLanXuatHien[i];
                m = 1;
                chuSoItNhat[0] = i;
            } else if (soLanXuatHien[i] == soLanXuaHienItNhat){
                m++;
                chuSoItNhat[m - 1] = i;
            }
        }
    }
}

// -------------------------
// 236
int DemMangCon(int a[100], int nA , int b[100], int nB){
    if(nA <=0 || nB <= 0) return 0;
    if(nA>nB) return 0;

    int dem = 0;

    for(int i = 0; i <= nB - nA; i++){
        // Kiểm tra A có là con B tại vị trí i ko
        bool laMangCon = true;
        for(int j = 0; j <= nA; j++){
            if(a[j] != b[i + j]){
                laMangCon = false;
                break; 
            }
        }
        if(laMangCon) dem++;
    }
    return dem;
    
}


// -------------------------
// Xóa các phần tử trùng lập
void XoaTrungLap(int a[100], int& n){
    if(n<=0) return;
    int newSize = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count == 1){
            a[newSize] = a[i];
            newSize++;
        }
    }
    n = newSize;
}

// -------------------------
// Đếm mảng con tăng dần
int DemMangConTang(int a[100], int n){
    if(n <= 0) return 0;
    int i = 0;
    int dem = 0;
    while(i < n){
        int j = 0;
        while(j < n - 1 && a[j+1] > a[j]){
            j++;
        }
        if(j > i) dem++;
        i = j + 1;
    }
    return dem;
}

// -------------------------
// Liên kết lại các mảng con
void LienKetMangCon(int a[100], int n){
    if(n <= 0) return;
    for(int i = 0; i < n; i++){
        for(int d = 0; d <= n-i; d++ ){
            printf("\n");
            for(int k=0; k < d; k++){
                printf("%5d",a[i+k]);
            }
        }
    }
}
