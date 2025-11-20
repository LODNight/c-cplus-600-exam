#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// ---------------------------------------
// Bài 315: Viết hàm tìm giá trị lớn nhất trong ma trận số thực
float timGiaTriLonNhat(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    int max = a[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] > max) max = a[i][j];
        }
    }
    return max;
}


// if(n < 1 || m < 1) return 0;
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
        
//     }
// }

// ---------------------------------------
// Bài 342(*): Đếm số lượng phần tử cực đại trong ma trận các số thực. Một phần tử được gọi là cực đại khi nó lớn hơn các phần tử xung quanh

// 3 4 7 8
// 6 8 2 1
// 9 0 3 3
// 1 1 2 8
// => 8 8 9 8
int demSLCucDaiSoThuc(float a[100][100], int n, int m){
    if(n < 2 && m < 2) return 0;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            // hang 1 
            if(i==0 && a[0][j]){
                return 0;
            }
        }
    }
}