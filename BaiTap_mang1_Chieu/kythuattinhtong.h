#pragma once

bool KiemTraSoNguyenTo(int n);
double tbcSoNguyenTo(int a[100], int n);
int timSoAmDauTien(int a[100], int n);

// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
void TimGiaTriLonNhatLaSoThuc(float a[100], int n);

// Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên
int timViTriCoGiaTriNhoNhat(int a[100], int n);

// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
bool kiemTraGiaTriChanNhoHon2004(int a[100], int n);

// Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng
int demSoLuongSoNguyenTo(int a[100], int n);

// Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực
int tongCacSoThucAm(float a[100], int n);

void thongKePhanTuTrongMang(int a[100], int n);

// Sắp xếp mảng 1 chiều các số nguyên tăng dần
void SapXepMang1ChieuTangDan(int a[100], int n);

// Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
void SapXepMang1ChieuTangDanTheoSoThuc(float a[100], int n);

// -------------------------
// Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên
void lietKeCacGiaTriChan(int a[100], int n);

// -------------------------
// Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
void lietKeViTriSoThucAm(float a[100], int n);



// 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b 
int DemMangCon(int a[100], int nA , int b[100], int nB);

// 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng


// 271: Xóa phần tử có chỉ số k trong mảng

// 279: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
void XoaTrungLap(int a[100], int& n);

// 298: Đếm mảng con tăng có độ dài lớn hơn 1
int DemMangConTang(int a[100], int n);