#include <stdio.h>

void nhapMaTran(int a[20][20], int& n, int& m){
    printf("Nhập số dòng: ");
    scanf("%d",&n);
    printf("Nhập số cột: ");
    scanf("%d",&m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Nhập số a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMaTran(int a[20][20], int n, int m){
    for (int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}