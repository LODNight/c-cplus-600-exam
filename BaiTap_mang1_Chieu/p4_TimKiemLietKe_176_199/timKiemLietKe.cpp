#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>


// -------------------------
// 	Bài 176: Hãy liệt kê các số âm trong mảng 1 chiều các số thực
void lietKeSoAmTrongMang1ChieuSoThuc(float a[100], int n){
    if(n <=0) return;
    printf("\n");
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            printf("%.2f ", a[i]);
        }
    }
}

// -------------------------
// 	Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước
void lietKeCacSoTrongDoanXY(float a[100], int n, float x, float y){
    if(n <= 0) return;
    if(y < x){
        float temp = y;
        y = x;
        x = temp;
    }
    printf("\n");
    for(int i=0; i < n; i++){
        if(a[i] >= x && a[i] <= y){
            printf("%.2f ",a[i]);
        } 
    }
}

// -------------------------
// 	Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)
void lietKeSoChanTrongDoanXY(int a[100], int n, int x, int y){
    if(n<=0) return;
    if(y<x){
        int temp = y;
        y = x;
        x = temp;
    }
    printf("\n");
    for(int i=0; i < n; i++){
        if(a[i] >= x && a[i] <=y && a[i] % 2 == 0){
            printf("%.2f ", a[i]);
        }
    }
}

// -------------------------
// 	Bài 179: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện lớn hơn giá trị tuyệt đối của giá trị đứng liền sau nó
void lietKeCacGiaTriLonHonGiaTriKeTiep(int a[100], int n){
    if(n<=0) return;
    printf("\n");
    for(int i=0; i < n-1; i++){
        if(a[i] > abs(a[i+1])){
            printf("%d ", a[i]);
        }
    }
}

// -------------------------
// 	Bài 180: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó và lớn hơn trị tuyệt đối của giá trị đứng liền trước nó
void lkGiaTriNhoHonSauLonHonTruoc(int a[100], int n){
    if(n < 3) return;
    printf("\n");
    for(int i=1; i < n-1; i++){
        if(a[i] > abs(a[i-1]) && a[i] < abs(a[i+1])){
            printf("%d", a[i]);
        }
    }
}

// -------------------------
// 	Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
void lkGiaTriChanLienKe(int a[100], int n){
    if(n<2) return;
    printf("\n");
    for(int i=0; i < n; i++){
        if(a[i] % 2 ==0){
            int thoa = 0;

            if(i > 0 && a[i-1] % 2 == 0) thoa = 1;
            if(n < n-1 && a[i+1] % 2 ==0) thoa = 1;
            
            if(thoa == 1)
                printf("%d",a[i]);
            
        }
    }
}


// -------------------------
// 	Bài 182: Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng có ít nhất 1 lận cận trái dấu với nó
void lkSoLanCanTraiDau(float a[100], int n){
    if(n < 2) return;
    printf("\n");
    for(int i=0; i < n; i++){
        int thoa = 0;

        if(a[i] > 0){
            if(i > 0 && (a[i] * a[i-1] < 0)) thoa = 1;
            if(i < n-1 && (a[i] * a[i+1] < 0)) thoa = 1;
        }
        
        if(thoa == 1) printf("%.2f ", a[i]);
    }
}

// -------------------------
// 	Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng 1 chiều các số thực
void lkViTriGiaTriLonNhat(float a[100], int n){
    if(n<1) return;
    float max = a[0];
    // Tim so lon nhat
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("\n");
    // Tim vi tri co so lon nhat
    for(int i=0; i < n; i++){
        if(a[i] == max){
            printf("%d ",i);
        }
    }
}

// -------------------------
// 	Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
bool soNguyenTo(int n){
    if(n < 2) return false;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

void lkSoNguyenTo(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    for(int i=0; i < n; i++){
        if(soNguyenTo(a[i])) printf("%d ",i);
    }
}

// -------------------------
// 	Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1 chiều các số nguyên
// so chinh phuong = binh phuong cua no
bool soChinhPhuong(int n){
    if(n < 0) return false;
    int e = (int)sqrt(n);
    return (e*e == n);
}

void lkViTriSoChinhPhuong(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    for(int i=0; i < n; i++){
        if(soChinhPhuong(a[i])) printf("%d ",i);
    }
}

// -------------------------
// 	Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng
void lkViTriCoGiaTriAmBangGTAmDauTien(float a[100], int n){
    if(n < 1) return;
    printf("\n");
    bool flag = false;
    float check;
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            if(!flag) {
                flag = true;
                check = a[i];
                printf("%d ",i);
            }
            else if(a[i] == check){
                printf("%d ",i);
            }
        }
    }
}

// -------------------------
// 	Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
void lkViTriBanhGiaTriDuongDauTienNhoNhat(float a[100], int n){
    if(n < 1) return;
    bool flag = false;
    float min;
    for(int i=0; i < n; i++){
        if(a[i] > 0){
            if(!flag){
                min = a[i];
                flag = true;
            } 
            else if(a[i] < min){
                min = a[i];
            }
        }
    }
    if(!flag) return;

    printf("\n");
    for(int i=0; i < n; i++){
        if(a[i] == min) printf("%d ",i);
    }
}

// -------------------------
// 	Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên
void lkViTriChanLonNhat(int a[100], int n){
    if(n < 1) return;
    int max;
    int flag = false;
    for(int i=0; i < n; i++){
        if(a[i] % 2 == 0){
            if(!flag){
                max = a[i];
                flag = true;
            }
            else if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(!flag) return;

    printf("\n");
    for(int i=0; i<n; i++){
        if(a[i] == max) printf("%d ",i);
    }
}

// -------------------------
// 	Bài 189: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ
bool ktChuSoDauTienLe(int n){
    n = abs(n);
    while(n >= 10){
        n/= 10;
    }
    return (n % 2 != 0);
}

void lkGiaTriCoChuSoDauTienLaSoLe(int a[100], int n){
    if(n<1) return;
    printf("\n");
    for(int i = 0; i < n; i++){
        if(ktChuSoDauTienLe(a[i])) printf("%d ",a[i]);
    }
}

// -------------------------
// 	Bài 190: Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các số nguyên
bool ktChuSoLe(int n){
    int d;
    if(n ==0 ) return false;
    n = abs(n);
    while(n > 0){
        d = n%10;
        if(d % 2 == 0) return false;
        n/=10;
    }
    return true;
}

void lkGiaTriToanChuSoLe(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    for(int i=0; i < n; i++){
        if(ktChuSoLe(a[i])) printf("%d ", a[i]);
    }
}

// -------------------------
// 	Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực. Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
void lkGiaTriCucDai(float a[100], int n){
    if(n < 2) return;
    for(int i=0; i<n; i++){
        int thoa = 0;
        if(i == 0 && a[i] > a[i+1]) thoa = 1;
        else if(i == n-1 && a[i] > a[i-1]) thoa = 1;
        else if(i > 0 && i < n-1){
            if(a[i] > a[i-1] && a[i] > a[i+1]) thoa = 1;
        }
        if(thoa == 1){
            printf("%.2f ", a[i]);
        }
    }
}

// -------------------------
// 	Bài 192: Hãy liệt kê các  giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là số chẵn
bool chuSoDauTienChan(int n){
    n = abs(n);
    while(n >= 10){
        n /= 10;
    }
    return (n % 2 == 0);
}

void lkGiaTriChuSoDauTienChan(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    for(int i = 0; i < n; i++){
        if(chuSoDauTienChan(a[i])) printf("%d ", a[i]);
    }
}

// -------------------------
// 	Bài 193: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trong mảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0
bool ktDang3K(int n){
    while(n > 1){
        if(n % 3 != 0) return false;
        n /= 3;
    }
    return (n == 1);
}

void lkGiaTriCoDang3K(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    bool thoa = false;
    for(int i=0; i < n; i++){
        if(ktDang3K(a[i])){
            thoa = true;
            printf("%d ", a[i]);
        } 
    }
    if(!thoa) printf("0");
}

// -------------------------
// 	Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. Hãy viết hàm liệt kê các cặp giá trị gần nhau nhất
void lkCapGiaTriGanNhauNhat(int a[100], int n){
    if(n < 2) return;
    for(int i = 0; i < n-1; i++){
        int min = 9999;
        int p = a[i+1];
        for(int j=i; j < n; j++){
            int check = abs(a[i] - a[j]);
            if(check < min){
                min = check;
            }
        }
    }
}

// -------------------------
// 	Bài 196: Liệt kê các số âm trong mảng 1 chiều các số nguyên
void lkSoAmTrongMang1Chieu(int a[100], int n){
    if(n < 1) return;
    printf("\n");
    for(int i=0; i < n; i++){
        if(a[i] < 0){
            printf("%d ", a[i]);
        }
    }
}