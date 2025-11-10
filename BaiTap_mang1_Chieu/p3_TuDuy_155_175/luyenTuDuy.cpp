#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// -------------------------
// 	Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
float timSoThucXaNhatSoVoiX(float a[100], int n, int x){
    float max = a[0];
    float kc = fabs(a[0] - x);
    for(int i=0; i < n; i++){
        if(fabs(a[i] - x) > kc){
            max = a[i];
            kc = fabs(a[i] - x);
        }
        
    }
    return max;
}

// -------------------------
// 	Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
float soThucGanNhatVoiX(float a[100], int n, float x){
    float min = a[0];
    float kc = fabs(a[0] - x);
    for(int i=0; i < n; i++){
        if(fabs(a[i] - x) < kc){
            min = a[i];
            kc = fabs(a[i] - x);
        }
    }
    return min;
}

// -------------------------
// 	Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
void giaTriABTrongMang(float a[100], int n){
    float min = a[0];
    float max = a[0];
    for(int i=0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("\n[%.2f, %.2f]", min,max);
}

// -------------------------
// 	Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
// 	5 9 -10 7 6  => x = 10
float timXtrongMangSoThuc(float a[100], int n){
    float max = fabs(a[0]);
    for(int i=0; i < n; i++){
        if(fabs(a[i]) > max){
            max = fabs(a[i]);
        }
    }
    return max;
}

// -------------------------
// 	Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
float giaTriDauTienLonHon2003(float a[100], int n){
    for(int i=0; i < n; i++){
        if(a[i] > 2003){
            return a[i]; 
        }
    }
    return -1;
}

// -------------------------
// 	Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giá trị -1. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
float giaTriAmCuoiCungLonHonTru1(float a[100], int n){
    float max;
    bool soAm = false;
    for(int i=0; i < n; i++){
        if(a[i] < 0 && a[i] > -1){
            if(!soAm){
                max = a[i];
                soAm = true;
            } 
            else if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(soAm) return max;
    else return -1;
}

// -------------------------
// 	Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
int giaTriDauTienNamTrongManXY(int a[100], int n, int x, int y){
    int min;
    bool soHopLe = false; 
    for(int i=0; i < n; i++){
        if(a[i] < y){
            if(a[i] > x){
                if(!soHopLe){
                    soHopLe = true;
                    min = a[i];
                } 
                else if(a[i] < min){
                    min = a[i];
                }
            }
        }
    }
    if(soHopLe) return min;
    else return -1;
}