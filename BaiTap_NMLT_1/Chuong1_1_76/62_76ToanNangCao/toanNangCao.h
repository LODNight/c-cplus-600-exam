#pragma once

int timUocChungLonNhat(int a, int b);
int phuongTrinhBac1(int a, int b, float &x1);
int phuongTrinhBac2(int a, int b, int c, float &x1, float &x2);
int phuongTrinhBac4(int a, int b, int c, float &x1, float &x2);
double giaiThua(int m);
double luyThua(int n, int m);
// Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
double timSBai67(double x, int n);
// Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
double timSBai68(double x, int n);
// Bài 69: Tính S(x, n) = (-1)^0x – x^3 + x^5 + … + (-1)^n * x^2n+1
double timSBai69(double x, int n);
// Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
double timSBai70(double x, int n);
// Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
double timSBai71(double x, int n);
// Bài 72: Tính S(x, n) = –x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
double timSBai72(double x, int n);
// Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
double timSBai73(double x, int n);
// Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n + 1)!
double timSBai74(double x, int n);
// Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không
bool kiemTra2muK(int n);
// Bài 76: Kiểm tra số nguyên 4 byte có dạng 3^k hay không
bool kiemTra3muK(int n);