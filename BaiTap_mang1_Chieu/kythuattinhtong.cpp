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
// Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên
void lietKeCacGiaTriChan(int a[100], int n){    
    if(n < 0)
        printf("Loi: Khong co phan tu");
    printf("\n");
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("%d ",a[i]);
        }
    }
}

// -------------------------
// Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
void lietKeViTriSoThucAm(float a[100], int n){
    if(n < 0){
        printf("Khong tim thay phan tu");
    }
    printf("\nCac vi tri am la: ");
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            printf("[%d] ", i);
        }
    }
}

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
        if(KiemTraSoNguyenTo(a[i]))
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
        if(KiemTraSoNguyenTo(a[i]))
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
