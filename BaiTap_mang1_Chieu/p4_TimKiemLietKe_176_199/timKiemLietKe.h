#pragma once

// ================= BÀI TẬP TÌM KIẾM VÀ LIỆT KÊ =================

// -------------------------
// 	Bài 176: Hãy liệt kê các số âm trong mảng 1 chiều các số thực
void lietKeSoAmTrongMang1ChieuSoThuc(float a[100], int n);

// -------------------------
// 	Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước
void lietKeCacSoTrongDoanXY(float a[100], int n, float x, float y);

// -------------------------
// 	Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)
void lietKeSoChanTrongDoanXY(int a[100], int n, int x, int y);

// -------------------------
// 	Bài 179: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện lớn hơn giá trị tuyệt đối của giá trị đứng liền sau nó
void lietKeCacGiaTriLonHonGiaTriKeTiep(int a[100], int n);

// -------------------------
// 	Bài 180: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó và lớn hơn trị tuyệt đối của giá trị đứng liền trước nó
void lkGiaTriNhoHonSauLonHonTruoc(int a[100], int n);

// -------------------------
// 	Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
void lkGiaTriChanLienKe(int a[100], int n);

// -------------------------
// 	Bài 182: Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng có ít nhất 1 lận cận trái dấu với nó
void lkSoLanCanTraiDau(int a[100], int n);

// -------------------------
// 	Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng 1 chiều các số thực
void lkViTriGiaTriLonNhat(float a[100], int n);

// -------------------------
// 	Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
bool soNguyenTo(int n);
void lkSoNguyenTo(int a[100], int n);

// -------------------------
// 	Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1 chiều các số nguyên
bool soChinhPhuong(int n);
void lkViTriSoChinhPhuong(int a[100], int n);

// -------------------------
// 	Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng
void lkViTriCoGiaTriAmBangGTAmDauTien(float a[100], int n);

// -------------------------
// 	Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
void lkViTriBanhGiaTriDuongDauTienNhoNhat(float a[100], int n);

// -------------------------
// 	Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên
void lkViTriChanLonNhat(int a[100], int n);

// -------------------------
// 	Bài 189: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ
bool ktChuSoDauTienLe(int n);
void lkGiaTriCoChuSoDauTienLaSoLe(int a[100], int n);

// -------------------------
// 	Bài 190: Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các số nguyên
bool ktChuSoLe(int n);
void lkGiaTriToanChuSoLe(int a[100], int n);

// -------------------------
// 	Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực. Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
void lkGiaTriCucDai(float a[100], int n);

// -------------------------
// 	Bài 192: Hãy liệt kê các  giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là số chẵn

// -------------------------
// 	Bài 193: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trong mảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0

// -------------------------
// 	Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. Hãy viết hàm liệt kê các cặp giá trị gần nhau nhất

// -------------------------
// 	Bài 196: Liệt kê các số âm trong mảng 1 chiều các số nguyên

// -------------------------
// 	Bài 197: Hãy liệt kê các giá trị trong mảng các số nguyên có chữ số đầu tiên là chữ số lẻ

// -------------------------
// 	Bài 198: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng 1 chiều các số thực

// -------------------------
// 	Bài 199: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
