#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// Bài 311 + 313: Viết hàm nhập xuất ma trận số nguyên
// Nhập mảng 2 chiều số nguyên
void nhapMang2Chieu(int a[100][100], int& n, int& m){
    printf("Nhap chieu cao mang: ");
    scanf("%d",&n);
    printf("Nhap chieu dai mang: ");
    scanf("%d",&m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Nhap gia tri [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

// Xuất mảng 2 chiều số nguyên
void xuatMang2Chieu(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Bài 312 + 314: Viết hàm nhập xuất ma trận số thực
// Nhập mảng 2 chiều số thực
void nhapMang2Chieu(float a[100][100], int& n, int& m){
    printf("Nhap chieu cao mang: ");
    scanf("%d",&n);
    printf("Nhap chieu dai mang: ");
    scanf("%d",&m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Nhap gia tri [%d][%d]: ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
}

// Xuất mảng 2 chiều số thực
void xuatMang2Chieu(float a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%4.2f ", a[i][j]);
        }
        printf("\n");
    }
}