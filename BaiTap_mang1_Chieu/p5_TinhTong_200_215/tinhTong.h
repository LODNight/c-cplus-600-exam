#pragma once

// ================= BÀI TẬP TÍNH TỔNG =================

// -------------------------
// 	Bài 200: Tính tổng các phần tử trong mảng
int tongCacPhanTu(int a[100], int n);

// -------------------------
// 	Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực
float tongCacGiaTriDuongSoThuc(float a[100], int n);

// -------------------------
// 	Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên
bool chuSoDauTienLe(int n);
int tongGiaTriCoChuSoDauTienLe(int a[100], int n);

// -------------------------
// 	Bài 203: Tinh tổng các chữ số có chữ số hàng chục là 5 trong mảng 1 chiều các số nguyên
bool chuSoHangChucLa5(int n);
int tongGiaTriCoChuSoHangChucLa5(int a[100], int n);

// -------------------------
// 	Bài 204: Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng 1 chiều các số thực
float tongGiaTriLonHonGiaTriTruocNo(int a[100], int n);

// -------------------------
// 	Bài 205: Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
float tongGiaTriLonHonTriTuyetDoiLienSau(float a[100], int n);

// -------------------------
// 	Bài 206: Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng 1 chiều các số thực
// 	 Lưu ý: Một giá trị trong mảng có tối đa 2 giá trị xung quang
float tongGiaTriLonHonCacGiaTriXungQuanh(float a[100], int n);

// -------------------------
// 	Bài 207: Tính tổng các phần tử “cực trị” trong mảng. Một phần tử được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó
int tongGiaTriCucTri(int a[100], int n);

// -------------------------
// 	Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên
bool soChinhPhuong(int n);
int tongSoChinhPhuong(int a[100], int n);

// -------------------------
// 	Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên
int soDao(int n);
bool soDoiXung(int n);
int tongCacGiaTriDoiXung(int a[100], int n);

// -------------------------
// 	Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các số nguyên
bool chuSoDauTienChang(int n);
int tongGiaTriChuSoDauTienChang(int a[100], int n);

// -------------------------
// 	Bài 211: Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên
bool soNguyenTo(int n);
float tbcSoNguyenTo(int a[100], int n);

// -------------------------
// 	Bài 212: Tính trung bình cộng các số dương trong mảng 1 chiều các số thực
float tbcCacSoDuong(float a[100], int n);

// -------------------------
// 	Bài 213: Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số thực
float tbcGiaTriLonHonX(float a[100], int n, int x);

// -------------------------
// 	Bài 214: Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số thực
float tbnGiaTriDuong(float a[100], int n);

// -------------------------
// 	Bài 215 (*): Tính khoảng cách trung bình giữa các giá trị trong mảng
float kctbCacGiaTri(float a[100], int n);