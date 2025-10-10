#pragma once

// Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
double timSoThucLonNhat(double a, double b, double c);
// Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không
bool kiemTraDau(double a, double b);
// Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
void ptbac1(double a, double b);
// Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
int kiemTraQuy(int n);
// Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
double luyThua(double x, int n);
int TimSbai86(int n);
// Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000
int timSoLonHon1000();
// Bài 88: Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z
void xuatCacKyTuAZ();
// Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
int tongGiaTriSoLeNhoHonN(int n);
// Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
int timMLonNhaKhiTongBeHonN(int n);
// Bài 91: In tất cả các số nguyên dương lẻ nhỏ hơn 100
void inSoLeDuoi100();
// Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương
int timUocChungLonNhat(int a, int b);
// Bài 93: Tính tổng các số nguyên tố nhỏ hơn N (N nguyên dương)
bool kiemTraSoNguyenTo(int n);
int tongCacSoNguyenToNhoHonN(int n);
// Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
void inSoLeTruCacSoDaCho();
// Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
void thayDoiSoAm(double a, double b, double c);
// Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số
// f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5
// Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
// Bài 98: Lập chương trình giải hệ: ax + by = c
// Dx + ey = f. Các hệ số nhập từ bàn phím
// Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tăng dần mà chỉ dùng tối đa 1 biến phụ
// Bài 100: Viết chương trình giải phương trình bậc 2
// Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
// Bài 102: Viết chương trình nhập vào 1 ngày (ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)
// Bài 103: Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày trước ngày vừa nhập (ngày, tháng, năm)
// Bài 104: Viết chương trình nhập ngày, tháng, năm. Tính xem ngày đó là ngày thứ bao nhiêu trong năm
// Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số. Hãy in ra cách đọc của số nguyên này
// Bài 106 Viết chương trình nhập 1 số nguyên có 3 chữ số. Hãy in ra cách đọc của số nguyên này
// Bài 107: Viết hàm tính S = CanBacN(x)
// Bài 108: Viết hàm tính S = x^y
// Bài 109: Viết chương trình in bảng cửu chương ra màn hình
// Bài 110: Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 
// 2000 đồng, 5000 đồng. 
// Lập chương trình để tìm ra tất cả các phương án có thể
// Bài 111: Viết chương trình in ra tam giác cân có độ cao h
// a. Tam giác cân đặc nằm giữa màn hình

// b. Tam giác cân rỗng nằm giữa màn hình
// c. Tam giác vuông cân đặc
// d. Tam giác vuông cân rỗng
// Bài 112: Viết chương trình in ra hình chữ nhật có kích thước m x n
// a. Hình chữ nhật đặc
// b. Hình chữ nhật rỗng
// Bài 113: Lập chương trình tính sin(x) với độ chính xác 0.00001 theo công thức
// Sin(x) = x – x^3/3! + x^5/5! + … + (-1)^n . x^(2n + 1)/(2n + 1)!
