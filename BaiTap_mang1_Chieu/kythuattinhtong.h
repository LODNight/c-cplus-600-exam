#pragma once

int KiemTraSoNguyenTo(int n);
double tbcSoNguyenTo(int a[100], int n);
int timSoAmDauTien(int a[100], int n);

// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
void TimGiaTriLonNhatLaSoThuc(float a[100], int n);

void thongKePhanTuTrongMang(int a[100], int n);

// Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
void SapXepMang1ChieuTangDan(int a[100], int n);

// 173 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng
int TimSoXuatHienItNhat(int a[100], int n);

void TimChuSoXuatHienItNhat(int a[100], int n, int chuSoItNhat[10], int m);

// 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b 
int DemMangCon(int a[100], int nA , int b[100], int nB);

// 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng


// 271: Xóa phần tử có chỉ số k trong mảng

// 279: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
void XoaTrungLap(int a[100], int& n);

// 298: Đếm mảng con tăng có độ dài lớn hơn 1
int DemMangConTang(int a[100], int n);