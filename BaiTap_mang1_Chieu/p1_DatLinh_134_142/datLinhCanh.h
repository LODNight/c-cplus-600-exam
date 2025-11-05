#pragma once
// ================= KỸ THUẬT ĐẶT LÍNH CANH =================

// -------------------------
// Bài 134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
float timGiaTriLonNhatTrongMangSoThuc(float a[100], int n);

// -------------------------
// Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
float timGiaTriDuongDauTienTrongMangSoThuc(float a[100], int n);

// -------------------------
// Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1
int timGiaTriChanCuoiCung(int a[100], int n);

// -------------------------
// Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số thực
int timViTriCoGiaTriNhoNhatMangSoThuc(float a[100], int n);

// -------------------------
// Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì sẽ trả về -1
int timViTriGiaTriChanDauTien(int a[100], int n);

// -------------------------
// Kiểm tra số hoàn thiện 
bool soHoanThien(int n);

// -------------------------
// Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
// Note: Số hoàn thiện = Tổng các ước số dương của chính nó
int timViTriSoHoanThienCuoiCung(int a[100], int n);

// -------------------------
// Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1
float timSoDuongNhoNhatTrongMangSoThuc(float a[100], int n);

// -------------------------
// 	Bài 141: Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về  -1
int timViTriSoDuongNhoNhatTrongMangSoThuc(float a[100], int n);

// -------------------------
// Bài 142: Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
float timGiaTriNhoNhatMang1Chieu(float a[100], int n);
