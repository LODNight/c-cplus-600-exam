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

// Bài 316: Viết hàm kiểm tra trong ma trận số nguyên có tồn tại giá trị chẵn nhỏ hơn 2015?
int ktTonTaiGiaTriChanNhoHon2015(int a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] < 2015 & a[i][j] % 2 == 0) return 1;
        }
    }
    return 0;
}

// Bài 317: Viết hàm tính trung bình cộng các số nguyên tố trong ma trận số nguyên
bool soNguyenTo(int n){
    if(n < 2) return false;
    for(int i=2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

float tbcSoNguyenTo(int a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    float total = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(soNguyenTo(a[i][j])){
                total += a[i][j];
                count++;
            }
        }
    }
    if(count < 1) return 0;
    return total/count;
}

// Bài 318: Viết hàm tính tổng các giá trị âm trong ma trận số thực
float tongGiaTriAmMangSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    float total = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] < 0) total += a[i][j];
        }
    }
    return total;
}

// Bài 319: Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và từ trái sang phải
void sapXepMaTranTangDan(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return;
    int k = n*m;
    // Duyệt qua toàn bộ phần tử
    for(int i=0; i < k-1; i++){
        // dùng mảng 2 để kiểm duyệt qua phần tử như mảng 1 chiều
        for(int j=i+1; j < k; j++){
            int d1 = i / m;
            int c1 = i % m;
            int d2 = j / m;
            int c2 = j % m;

            if(a[d1][c1] > a[d2][c2]){
                float temp = a[d2][c2];
                a[d2][c2] = a[d1][c1];
                a[d1][c1] = temp;
            }
        }
    }
}



// Kỹ thuật tính toán

// Bài 320: Tính tổng các số dương trong ma trận các số thực
float tongSoDuongMaTranSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    float sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] > 0) sum += a[i][j];
        }
    }
    return sum;
}

// Bài 321: Tính tích các giá trị lẻ trong ma trận các số nguyên
int tichGiaTriLeTrongMaTranSoNguyen(int a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    int tich = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] % 2 != 0) tich *= a[i][j];
        }
    }
    return tich;
}

// Bài 322: Tính tổng các giá trị trên 1 dòng trong ma trận các số thực
void tongGiaTri1DongSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return;
    for(int i=0; i<n; i++){
        float sum = 0;
        for(int j=0; j<m; j++){
            sum += a[i][j];
        }
        printf("\nTong dong [%d] = %.2f", i, sum);
    }
}

// Bài 323: Tính tích các giá trị dương trên 1 cột trong ma trận các số thực
void tichGiaTriDuongTren1CotMaTranSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return;
    for(int j=0; j<m; j++){
        float tich = 1;
        for(int i=0; i<n; i++){
            if(a[i][j] > 0)  tich *= a[i][j];  
        }
        printf("\nTich cot [%d] = %.2f", j, tich);
    }

}

// Bài 324: Tính tổng các giá trị dương trên 1 dòng trong ma trận các số thực
void tichGiaTriDuongTren1HangMaTranSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return;
    for(int i=0; i<n; i++){
        float tich = 1;
        for(int j=0; j<m; j++){
            if(a[i][j] > 0)  tich *= a[i][j];  
        }
        printf("\nTich cot [%d] = %.2f", i, tich);
    }
}

// ---------------------------------------
// Bài 342(*): Đếm số lượng phần tử cực đại trong ma trận các số thực. Một phần tử được gọi là cực đại khi nó lớn hơn các phần tử xung quanh

// C1: Dùng 2 hàm
// ++++++++++++++++++++++++
bool laCucDai(float a[100][100], int n, int m, int i, int j){
    for(int dx=-1; dx <= 1; dx++){
        for(int dy=-1; dy <= 1; dy++){
            if(dx == 0 && dy == 0) continue;

            int x = i + dx;
            int y = j + dy;

            if(x >= 0 && x < n && y >= 0 && y < m){
                if(a[x][y] >= a[i][j]){
                    return false; // phan tu xung quanh lon hon hoac bang
                }
            }
        }
    }
    return true;
}

// int demSLCucDaiSoThuc(float a[100][100], int n, int m){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(laCucDai(a,n,m,i,j)) count++;
//         }
//     }
//     return count;
// }
// ++++++++++++++++++++++++

// C2: 
int demSLCucDaiSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return false;
    int count = 0;
    int dx[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            bool thoa = true;

            // Kiểm tra theo từng dòng cột -1 0 1
            for(int k = 0; k < 8; k++){
                int x = i + dx[k];
                int y = j + dy[k];

                if(x >=0 && x < n && y >=0 && y < n){
                    if(a[i][j] <= a[x][y]){
                        thoa = false;
                        break;
                    }
                }
            }

            if(thoa) count++;
        }
    }
    return count;
}

// ---------------------------------------
// Bài 343(*): Đếm số lượng phần tử cực trị trong ma trận các số thực. Một phần tử được gọi là cực trị khi nó lớn hớn các phần tử xung quanh hoặc nhỏ hơn các phần tử xung quanh
bool laCucTieu(float a[100][100], int n, int m, int i, int j){
    for(int dx= -1; dx< 1; dx++){
        for(int dy=-1; dy<1; dy++){
            bool thoa = true; 
            if(dx == 0 && dy == 0) continue;
            int x = i + dx;
            int y = j + dy;
            
            if(x >= 0 && x < n && y >= m && y < m){
                if(a[i][j] >= a[x][y]){
                    thoa = false;
                    break;
                }
            }
        }
    }
    return true;
}

int demoSLCucTriSoThuc(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    int count = 0;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(laCucTieu(a,n,m,i,j) || laCucDai(a,n,m,i,j)){
                count++;
            }
        }
    }
    return count;
}

// ---------------------------------------
// Bài 344(*): Đếm số lượng giá trị phân biệt có trong ma trận các số thực. 
// Chú ý: Nếu có k phần tử (k >= 1) trong ma trận bằng nhau thì ta chỉ tính là 1
int demSLGiaTriPhanBiet(float a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    int count = 0;
    float b[n*m];
    b[0] = a[0][0];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // Kiểm tra mảng b có tồn tại giá trị chưa
            bool thoa = true;
            for(int k=0; k < count; k++){
                if(a[i][j] == b[k]){
                    thoa = false;
                    break;
                }
            }
            if(thoa){
                b[count] = a[i][j];
                count++;
            }
        }
    }
    return count;
}

// if(n < 1 || m < 1) return 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
            
//         }
//     }


// Bài 348: Kiểm tra ma trận có tồn tại số dương hay không
bool kiemTraSoDuongTrongMaTran(int a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] > 0) return true;
        }
    }
    return false;
}


// Bài 350: Kiểm tra ma trận có tồn tại số lẻ hay không
bool kiemTraSoLeTrongMaTran(int a[100][100], int n, int m){
    if(n < 1 || m < 1) return 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] % 2 != 0) return true;
        }
    }
    return false;

}