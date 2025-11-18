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
