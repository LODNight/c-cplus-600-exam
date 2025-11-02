#include <stdio.h>
#include <math.h>

// -------------------------
// Bài 128 + 130: Viết hàm nhập, xuất mảng 1 chiều các số thực
// Nhập mảng số thực
void NhapMangSoThuc(float a[100], int& n){
    printf("Nhập sl mảng: ");
    scanf_s("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Nhập pt [%d]: ",i);
        scanf("%f",&a[i]);
    }
}

// Xuất mảng số thực
void XuatMangSoThuc(float a[100], int n){
    for (int i=0; i<n; i++){
        printf("[%2.2f]",a[i]);
    }
}

// -------------------------
// Bài 129 + 131: Viết hàm nhập, xuất mảng 1 chiều các số nguyên
// Nhập mảng số nguyên dương
void NhapMang(int a[100], int& n){
    printf("Nhập sl mảng: ");
    scanf_s("%d",&n);
    for(int i=0; i < n; i++){
        printf("Nhập pt [%d]: ",i);
        scanf_s("%d",&a[i]);
    }
}

// Xuất mảng số nguyên
void XuatMang(int a[100], int n){
    for (int i=0; i<n; i++){
        printf("[%2d]",a[i]);
    }
}


// -------------------------
// Xóa mảng số nguyên
void XoaMang(int a[100], int &n, int k){
    if(k < 0 || k > n-1) return;
    for(int i = k; i < n-1; i++){
        a[i] = a[i+1];
    }
    n--;   
}

// Thêm mảng số nguyên
void ThemMang(int a[100], int &n, int k, int x){
    if(k < 0 || k > n) return;
    for(int i = n - 1; i >= k; i--){
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
}
