#pragma once

// ================= BÀI TẬP LUYỆN TẬP TƯ DUY =================

// -------------------------
// 	Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
float timSoThucXaNhatSoVoiX(float a[100], int n, float x);

// -------------------------
// 	Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
float soThucGanNhatVoiX(float a[100], int n, float x);

// -------------------------
// 	Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
void giaTriABTrongMang(float a[100], int n);

// -------------------------
// 	Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
// 	5 9 -10 7 6  => x = 10
float timXtrongMangSoThuc(float a[100], int n);

// -------------------------
// 	Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
float giaTriDauTienLonHon2003(float a[100], int n);

// -------------------------
// 	Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giá trị -1. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
float giaTriAmCuoiCungLonHonTru1(float a[100], int n);

// -------------------------
// 	Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
int giaTriDauTienNamTrongManXY(int a[100], int n, int x, int y);

// -------------------------
// 	Bài 162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: 
// có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận. 
// Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1
int viTriGiaTriBangTichLanCan(float a[100], int n);

// -------------------------
// 	Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên
bool soChinhPhuong(int n);

int soChinhPhuongDauTien(int a[100], int n);

// -------------------------
// 	Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh
// số gánh là số đảo ngược của chính nó VD: 121, 12321, 32123
bool soGanh(int n);

int soGanhDauTien(int a[100], int n);

// -------------------------
// 	Bài 165: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ
bool chuSoDauTien(int n);

int soDauTienChuSoLe(int a[100], int n);

// -------------------------
// 	Bài 166: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k. 
// Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0
int giaTriDauTienCoDang2K(int a[100], int n);

// -------------------------
// 	Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0
int giaTriToanLeLonNhat(int a[100], int n);

// -------------------------
// 	Bài 168: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k. Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 0
int giaTriLonNhatCoDang5MuK(int a[100], int n);

// -------------------------
// 	Bài 169: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số chẵn nhỏ nhất lớn hơn mọi giá trị có trong mảng
int soChanNhoNhatLonHonMoiGiaTri(int a[100], int n);

// -------------------------
// 	Bài 170: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
int soNguyenToNhoNhatLonHonMoiGiaTri(int a[100], int n);

// -------------------------
// 	Bài 171: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
int uocChungLonNhat(int a[100], int n);

// -------------------------
// 	Bài 172: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng

// -------------------------
// 	Bài 173 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng
void demChuSoXuatHien(int n, int dem[]);

int chuSoItNhatTrongMang(int a[], int n);

// -------------------------
// 	Bài 174 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a, b) trong mảng thỏa điều kiện a <= b
void lietKeCacCapGiaTri(float a[], int n);

// -------------------------
// 	Bài 175 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm tìm 2 giá trị gần nhau nhất trong mảng (Lưu ý: Mảng có các giá trị khác nhau từng đôi một còn có tên là mảng phân biệt)
void lietKeCacCapGiaTriGanNhau(float a[], int n);