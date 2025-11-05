#pragma once

// ================= BÀI TẬP LUYỆN TẬP =================

// Kiểm tra số Nguyên tố
bool soNguyenTo(int n);

// Kiểm tra số hoàn thiện
bool soHoanThien(int n);

// -------------------------
// 	Bài 143: Viết hàm tìm số chẵn đầu tiên trong mảng các số nguyên. Nếu mảng không có giá trị chẵn thì trả về  -1
int timSoChanDauTien(int a[100], int n);

// -------------------------
// Bài 144: Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  – 1
int timSoNguyenToDauTien(int a[100], int n);

// -------------------------
// 	Bài 145: Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
int timSoHoanThienDauTien(int a[100], int n);

// -------------------------
// 	Bài 146: Tìm giá trị âm đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về -1
float timSoAmDauTienTrongMangSoThuc(float a[100], int n);

// -------------------------
// 	Bài 147: Tìm số dương cuối cùng trong mảng số thực. Nếu mảng không có giá trị dương thì trả về  -1
int timSoDuongCuoiCungTrongMangSoThuc(float a[100], int n);

// -------------------------
// 	Bài 148: Tìm số nguyên tố cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  -1
int soNguyenToCuoiCung(int a[100], int n);

// -------------------------
// 	Bài 149: Tìm số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
int timSoHoanThienCuoiCung(int a[100], int n);

// -------------------------
// 	Bài 150: Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về  -1
float giaTriAmLonNhatSoThuc(float a[100], int n);

// -------------------------
// 	Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1
int soNguyenToLonNhat(int a[100], int n);

// -------------------------
// 	Bài 152: Hãy tìm số hoàn thiện nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về -1
int soHoanThienNhoNhat(int a[100], int n);

// -------------------------
// 	Bài 153: Hãy tìm giá trị chẵn nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số chẵn thì trả về -1
int giaTriChanNhoNhatTrongMang1Chieu(int a[100], int n);

// -------------------------
// 	Bài 154: Hãy tìm vị trí giá trị âm nhỏ nhất trong mảng các số thực. Nếu mảng không có số âm thì trả về -1
int viTriSoThucAmNhoNhat(float a[100], int n);