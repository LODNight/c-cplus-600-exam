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