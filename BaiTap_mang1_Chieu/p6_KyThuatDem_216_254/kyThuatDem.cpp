#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

// -------------------------
// 	Bài 216: Đếm số lượng số chẵn trong mảng
int demSLSoChan(int a[100], int n);

// -------------------------
// 	Bài 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b
// A: 1 2 3 
// B: 1 3 5 1 2 3 8 1 2 3 7 6
int soLanXuatHienCuaMangCon(int a[100], int b[10], int n, int m){
    if(m > n || m < 1) return 0;
    int count = 0;
    for(int i=0; i <= n-m; i++){
        bool isMatch = true;

        for(int j=0; j < m; j++){
            if(a[i+j] != b[j]){
                isMatch = false;
                break;
            }
        }

        if(isMatch){
            count++;
        }
    }
}