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