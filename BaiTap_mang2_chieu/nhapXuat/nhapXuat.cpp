#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// Nhập mảng 2 chiều
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

// Xuất mảng 2 chiều
void xuatMang2Chieu(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}