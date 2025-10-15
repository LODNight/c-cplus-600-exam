#include <stdio.h>
#include <stdbool.h>
#include <math.h>


// Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
double timSoThucLonNhat(double a, double b, double c){
    if(a >= b && a >= c) return a; // Kiểm tra a với b và c
    else if(b >= c) return b;      // a ko lớn nhất => check b và c
    else return c;                 // a và b nhỏ hơn c
}

// Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không
bool kiemTraDau(double a, double b){
    // Cách 1: Kiểm tra bằng if else đơn giản
    if(a == 0 || b == 0) return false;
    if(a > 0 && b < 0) return false;
    return true;

    // Cách 2: Return vể Phép nhân. nếu nhân nhau > 0 => cùng dấu, còn lại trái dấu
    return (a*b > 0);
}

// Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
void ptbac1(double a, double b){
    double result = -b/a;
    if(a != 0) printf("Pt có nghiệm là: %lf",result); 
    else{
        if(b == 0) printf("Phương trình có vô số nghiệm");
        else printf("Phương trinh vô nghiệm");
    } 
}

// Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
int kiemTraQuy(int n){
    switch (n)
    {
    case 1:
    case 2:
    case 3:
        return 1;
        break;
    case 4:
    case 5:
    case 6:
        return 2;
        break;
    case 7:
    case 8:
    case 9:
        return 3;
        break;
    case 10:
    case 11:
    case 12:
        return 4;
        break;
    default:
        return 0;
        break;
    }
}

// Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
double luyThua(double x, int n){
    double result = 1;    
    for(int i=1; i<=n; i++){
        result *= x;
    }
    return result;
}

int TimSbai86(int n){
    int total = 0;
    for(int i=0; i<=n; i++){
        total += luyThua(i,3);
    }
    return total;
}

// Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000
int timSoLonHon1000(){
    int total = 0;
    int i = 0;
    while (total <= 10000){
        i++;
        total += i;
    }
    return i;
}

// Bài 88: Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z
void xuatCacKyTuAZ(){
    char n = 'A';
    for(int i=0; i<26;i++){
        printf("%c ",n+i);
    }
}

// Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
int tongGiaTriSoLeNhoHonN(int n){
    if(n<=0) return 0;
    int total = 0;
    int i = 1;
    while(total <= n){
        if(i % 2 != 0) total += i;
        i ++;
    }
    return total;
}
// Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
int timMLonNhaKhiTongBeHonN(int n){
    if(n<0) return 0;
    int total = 0;
    int i=0;
    while(total<n){
        i++;
        total += i;
    }
    return i-1;
}
// Bài 91: In tất cả các số nguyên dương lẻ nhỏ hơn 100
void inSoLeDuoi100(){
    for(int i=0; i<100; i++){
        if(i % 2 != 0) printf("%d ",i);
    }
}

// Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương
int timUocChungLonNhat(int a, int b){
    if(a<=0 || b<=0) return 0;
    int max = a;
    if(b>max) max=b;

    int uocChung = 0;
    for(int i=1; i<max; i++){
        if(a%i==0 && b%i==0) uocChung = i;
    }
    return uocChung;
}

// Bài 93: Tính tổng các số nguyên tố nhỏ hơn N (N nguyên dương)
bool kiemTraSoNguyenTo(int n){
    if(n <= 1) return false;
    for(int i=2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int tongCacSoNguyenToNhoHonN(int n){
    if(n<=2) return 0;
    int tong=0;
    for(int i=2; i<n; i++){
        if(kiemTraSoNguyenTo(i)) tong += i;
    }
    return tong;
}

// Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
void inSoLeTruCacSoDaCho(){
    for(int i=0; i<100; i++){
        if(i==5 || i==7 || i==93) continue;
        if(i%2 != 0) printf("%d ",i);
    }
}

// Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
void thayDoiSoAm(double a, double b, double c){
    if(a < 0) a *= -1.0;
    if(b < 0) b *= -1.0;
    if(c < 0) c *= -1.0;
    printf("%lf %lf %lf", a,b,c);
}
// Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số
// f(x) = 2x^2 + 5x + 9 khi x >= 5, 
// f(x) = -2x^2 + 4x – 9 khi x < 5
double tinhGiaTriHamSo(double n){
    double fx;
    if(n >= 5) fx = 2*(n*n) + 5 * n + 9;
    else fx = -2*n*n + 4*n - 9;

    return fx;
}

// Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
// Tổng 2 cạnh phải lớn hơn cạnh còn lại
// a = b = c    => Đều
// a = b        => Cân
void xacDinhHinhTamGiac(double a, double b, double c){
    if(a<=0 || b <=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a) {
        printf("Không phải là 3 cạnh của tam giác");
        return;
    }
    double a2 = a*a;
    double b2 = b*b;
    double c2 = c*c;
    if(a==b && b==c){
        printf("Tam giác ĐỀU");
    }
    else if(a2+b2==c2 || a2+c2==b2 || b2+c2==a2){
        // Kiểm tra vuông cân
        if(a==b || a==c || b==c) printf("Tam giác VUÔNG CÂN");
        else printf("Tam giác VUÔNG");
    }
    else if(a==b || a==c || c==b) printf("Tam giác CÂN");
    else printf("Tam giác THƯỜNG");
}
// Bài 98: Lập chương trình giải hệ: ax + by = c
// Dx + ey = f. Các hệ số nhập từ bàn phím

// Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tăng dần mà chỉ dùng tối đa 1 biến phụ
void soThucTangDan(double a, double b, double c){
    double temp = 0;
    if(a > b){
        temp = b;
        b = a; 
        a = temp;
    } 
    if(b > c){
        temp = c;
        c = b;
        b = temp;
    }
    if(c > a){
        temp = a;
        a = c;
        c = temp;
    }
    printf("%lf %lf %lf",c,b,a);
}

// Bài 100: Viết chương trình giải phương trình bậc 2
// Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
// Bài 102: Viết chương trình nhập vào 1 ngày (ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)
int timSoNgayTrongThang(int m, int y){
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        return 31;
    } 
    if (m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    } else {
        return timNamNhuan(y);
    }
}

int timNamNhuan(int y){
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
        return 29;
    } else {
        return 28;
    }
}

void timNgayKeTiep(int d, int m, int y){
    int max_d = timSoNgayTrongThang(m,y); 
    if(d < max_d){
        d++;
    } 
    if(d > max_d){
        d= 1;
        m++;
    }
    if(m > 12){
        y++;
        m = 1;
    }
    printf("%d/%d/%d",d,m,y);
}
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
void Doitien(int n){
    // x * 1000 + y * 2000 + 5000 * z = n
    for(int soto5000 = 0; soto5000 * 5000 <= n; soto5000++){
        for(int soTo2000 = 0; soTo2000 * 2000 + soto5000 * 5000 <=n; soTo2000++){
            int soTienConLai = n - (soTo2000 * 2000 + soto5000 * 5000);
            if(soTienConLai % 1000 == 0){
                int soto1000 = soTienConLai / 1000;
                printf("%5d to 5000 + %5d to 2000 + %5d to 1000\n",soto5000,soTo2000,soto1000);
            }
        }
    }

}
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
