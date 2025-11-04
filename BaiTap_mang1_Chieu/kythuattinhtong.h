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
int soHoanThien(int n);

// -------------------------
// Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
// Note: Số hoàn thiện = Tổng các ước số dương của chính nó
int timViTriSoHoanThienCuoiCung(int a[100], int n);

// -------------------------
// Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1
float timSoNhoNhatTrongMangSoThuc(float a[100], int n);


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