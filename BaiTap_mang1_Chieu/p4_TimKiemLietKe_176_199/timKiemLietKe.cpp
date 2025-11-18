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
        if(a[i] <= x && a[i] >= y){
            printf("%.2f ",a[i]);
        } 
    }
}