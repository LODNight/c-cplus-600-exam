#include <stdio.h>
#include <stdbool.h>

// Bài 319:
void sapXepTangDan(int a[20][20], int n, int m){
    // Buoc 1: Ma tran a => mang 1 chieu b
    int b[400];
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[k] = a[i][j];
            k++;
        }
    }
    // Buoc 2: Sap xep tang dan mang 1 chieu b
    // Sapxep(b,n * m);
    // Buoc 3: Dua cac phan tu tu b sang a
    k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = b[k];
            k++;
        }
    }

}

// Bài 342(*):
int demPhanTuCucDai(int a[20][20], int n, int m){
    if(n <= 0 || m <= 0) return 0;
    int dem = 0;
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // Kiểm tra a[i][j] có thỏa điều kiện ? 
            bool thoaDieuKien = true;
            for(int k = 0; k < 8; k++){
                int iX = i + dx[k];
                int jY = j + dy[k];
                if(iX >= 0 && iX < n && jY >=0 && jY < m){
                    if(a[i][j] <= a[iX][jY]){
                        thoaDieuKien = false;
                        break;
                    }
                } 
            }
            if(thoaDieuKien) dem++;
        }
    }
    return dem;
}

// Bài 364: 
bool kiemTraMaTranCon(int a[20][20],int nA, int mA, int b[20][20], int nB, int mB){
    if(nA <= 0 || mA <= 0) return false;
    if(nB <= 0 || mB <= 0) return false;
    for(int iB=0; iB <= nB-nA; iB++){
        for(int jB=0; jB <= mB-nB; jB++){
            // Kiểm tra a có là con của b tại vị trí iB, jB ko
            bool laCon = true;
            for(int iA=0; iA <= nA && laCon; iA++){
                for(int jA=0; jA <= nA && laCon; jA++){
                    if(a[iA][jA] != b[iB+iA][jB+jA]){
                        laCon = false;
                        break;
                    }
                }
            }
            if(laCon) return true;
        }
    }
    return false;
}