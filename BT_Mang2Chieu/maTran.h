#pragma once

// Bài 319: Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và từ trái sang phải
void sapXepTangDan(int a[20][20], int n, int m);

// Bài 342(*): Đếm số lượng phần tử cực đại trong ma trận các số thực. Một phần tử được gọi là cực đại khi nó lớn hơn các phần tử xung quanh
int demPhanTuCucDai(int a[20][20], int n, int m);

// Bài 364: Cho 2 ma trận A và B. Kiểm tra xem ma trận A có là ma trận con của ma trận B hay không
bool kiemTraMaTranCon(int a[20][20],int nA, int mA, int b[20][20], int nB, int mB);