#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// -------------------------
// 	Bài 200: Tính tổng các phần tử trong mảng
int tongCacPhanTu(int a[100], int n){
    if(n < 1) return 0;
    int total = 0;
    for(int i=0; i<n; i++){
        total += a[i];
    }
    return total;
}

// -------------------------
// 	Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực
int tongCacGiaTriDuongSoThuc(int a[100], int n){
    if(n<1) return 0;
    float total = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            total += a[i];
        }
    }
    return total;
}
