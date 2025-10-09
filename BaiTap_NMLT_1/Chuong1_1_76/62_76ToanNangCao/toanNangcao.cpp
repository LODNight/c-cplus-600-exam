#include <stdio.h>
#include <math.h>

// Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.
int timUocChungLonNhat(int a, int b){
    int min = a;
    int uocSo = 0;
    if(a < b) min = b; 
    for(int i=1; i <= min; i++){
        if(a % i == 0 && b % i == 0){
            uocSo = i;
        }
    }
    return uocSo;
}

// Bài 63: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này    10 12
int timBoiChungNhoNhat(int a, int b){
    int max = a;
    int min = b;
    if(b>a){
        max = b;
        min = a;
    } 
    int boiSo = 0;
    for(int i=min; i<=(a*b); i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }
    return 1;
}

// Bài 64 + 65 + 66: Giải phương trình bậc 1, 2, 4
// Bài 64: Phương trình bậc 1
// 0: Vô Nghiệm
// 1: Vô số nghiệm
// 2: Có nghiệm x
int phuongTrinhBac1(int a, int b, float &x1){
    
    if(a == 0){
        if(b == 0){
            return 0;
        }
        else{
            return 1;
        }   
    } else {
        x1 = 0.1*-b/a;
        return 2;
    }
}

// Bài 65: Phương trình bậc 2
// delta = ax^2 + bx + c
// 0: Vô Nghiệm
// 1: Nghiệm kép x1 = x2
// 2: 2 nghiệm x1 x2

int phuongTrinhBac2(int a, int b, int c, float &x1, float &x2){


    int delta = (b*b)-4*a*c;
    if(delta < 0){
        return 0; 
    } else if (delta == 0){
        x1 = x2 = -b/(a*2);
        return 1;
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        return 2;
    }
}


// Bài 66: Phương trình bậc 4
// ax^4 + bx^2 + c = 0
// Sử dụng lại bài pt bậc 2
// [ x1 = x2 ]:
// < 0      => Vô nghiệm
// = 0      => 1 no = 0
// != 0     => 2 no x1 = sqrt(x1), x2 = -sqrt(x1)
// [ x1 != x2 ]:
// x1 < 0  |  x2 < 0    => Vô nghiệm
// x1 < 0  |  x2 = 0    => 1 no x = 0   
// x1 < 0  |  x2 > 0    => 2 no x1 = sqrt(x2), x2 = -sqrt(x2)
// x1 = 0  |  x2 < 0    => 1 no x = 0
// x1 = 0  |  x2 > 0    => 3 no x1 = sqrt(x2), x2 = -sqrt(x2), x3 = 0
// x1 = 0  |  x2 = 0    => 1 no x = 0
// x1 > 0  |  x2 < 0    => 2 no x1 = sqrt(x1), x2 = -sqrt(x1)
// x1 > 0  |  x2 = 0    => 3 no x1 = sqrt(x1), x2 = -sqrt(x1), x3 = 0
// x1 > 0  |  x2 > 0    => 4 no x1 = sqrt(x1), x2 = -sqrt(x1), x3 = sqrt(x2), x4 = -sqrt(x2)
void phuongTrinhBac4TrungPhuong(int a, int b, int c, float& x1, float& x2){
    int result = phuongTrinhBac2(a,b,c,x1,x2);
    if(result = 0){
        printf("Pt vô nghiệm");
    } 
    // Trường hợp: x1 = x2 
    else if(result = 1){
        // x1 < 0      => Vô nghiệm
        if(x1 < 0) printf("PT vô no");
        
        // x1 = 0      => 1 no = 0
        else if(x1 == 0) printf("PT có no kép: x1 = x2 = %.2f",x1);
        
        // x1 != 0     => 2 no x1 = sqrt(x1), x2 = -sqrt(x1)
        else printf("PT có 2 no kép: x1 = %.2f  |  x2 = %.2f",sqrt(x1),-sqrt(x1));
    }

    // Trường hợp: x1 != x2
    else{
        // x1 < 0  |  x2 < 0    => Vô nghiệm
        // x1 < 0  |  x2 = 0    => 1 no x = 0   
        // x1 < 0  |  x2 > 0    => 2 no x1 = sqrt(x2), x2 = -sqrt(x2)
        if(x1 < 0){
            if(x2 < 0) printf("Pt Vô nghiệm");
            
            else if(x2 = 0) printf("Pt có 1 nghiệm x = 0");

            else{
                printf("Pt có 2 nhiệm:");
                printf("x1: %.2f",sqrt(x2));
                printf("x2: %.2f",-sqrt(x2));
            }
        }
        
        // x1 = 0  |  x2 < 0    => 1 no x = 0
        // x1 = 0  |  x2 = 0    => 1 no x = 0
        // x1 = 0  |  x2 > 0    => 3 no x1 = sqrt(x2), x2 = -sqrt(x2), x3 = 0
        else if(x1 == 0){
            if(x2 <= 0) printf("Pt có 1 nghiệm x = 0"); 

            else if(x2 > 0) {
                printf("Pt có 3 nhiệm:");
                printf("x1: %.2f",sqrt(x2));
                printf("x2: %.2f",-sqrt(x2));
                printf("x3: 0");
            }
        }

        // x1 > 0  |  x2 < 0    => 2 no x1 = sqrt(x1), x2 = -sqrt(x1)
        // x1 > 0  |  x2 = 0    => 3 no x1 = sqrt(x1), x2 = -sqrt(x1), x3 = 0
        // x1 > 0  |  x2 > 0    => 4 no x1 = sqrt(x1), x2 = -sqrt(x1), x3 = sqrt(x2), x4 = -sqrt(x2)
        else{
            if(x2 < 0){
                printf("Pt có 2 nhiệm:");
                printf("x1: %.2f",sqrt(x1));
                printf("x2: %.2f",-sqrt(x1));
            }

            else if(x2 = 0){
                printf("Pt có 3 nhiệm:");
                printf("x1: %.2f",sqrt(x1));
                printf("x2: %.2f",-sqrt(x1));
                printf("x3: 0");
            }

            else{
                printf("Pt có 4 nhiệm:");
                printf("x1: %.2f",sqrt(x1));
                printf("x2: %.2f",-sqrt(x1));
                printf("x3: %.2f",sqrt(x2));
                printf("x4: %.2f",-sqrt(x2));
            }
        }
        
    }
}

// Tính giai thừa (x!)
double giaiThua(int m){
    if(m < 0) return 0;
    if(m == 1 || m == 0) return 1;
    double result = 1.0;
    for(int i=1; i <=m; i++){
        result *= i;
    } 
    return result;
}

// Lũy thừa(x^n)
double luyThua(int n, int m){
    if(m == 0) return 1.0;
    double result = 1.0;
    for(int i =0; i < m; i++){
        result *= n;
    }
    return result;
}

// Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
double timSBai67(double x, int n){
    int total = x;
    int x_pre = x;
    for(int i = 1; i < n; i++){
        x_pre *= x;
        if((i+1) % 2 == 0){
            total += (-1) * x_pre;
        }
        else{
            total += x_pre;
        }
    }
    return total;
}

// Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
double timSBai68(double x, int n){
    int total = -(x*x);
    int x_pre = x*x;
    for(int i = 1; i < n; i++){
        x_pre *= x*x;
        if(i % 2 == 0){
            total += (-1) * x_pre; 
        } else {
            total += x_pre; 
        }
    }
    return total; 
}

// Bài 69: Tính S(x, n) = (-1)^0x – x^3 + x^5 + … + (-1)^n * x^2n+1
double timSBai69(double x, int n){
    int total = x;
    int x_pre = x;
    for(int i = 0; i < n; i++){
        x_pre *= x*x;
        if((i+1) % 2 == 0){
            total += x_pre;
        } else {
            total += (-1) * x_pre;
        }
    }
    return total;
}

// Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
double timSBai70(int n){
    double total = 1;
    int m = 1;
    for(int i=2; i <= n; i++){
        m += i;
        if(i % 2 == 0){
            total += (-1.0)/m;
        } else{
            total += (1.0)/m;
        }
    }
    return total;
}

// Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
double timSBai71(double x, int n){
    double total = 0;
    int count = 0;
    for(int i=1; i<=n; i++){
        count += 1;
        if(i % 2 != 0){
            total += ((-1.0) * luyThua(x,i)) / count; 
        } else {
            total += ((1.0) * luyThua(x,i)) / count; 
        }
    }
    return total;
    
}

// Bài 72: Tính S(x, n) = –x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
double timSBai72(double x, int n){
    double total = 0;
    for(int i=1; i<=n; i++){
        total += (luyThua(-1,i) * luyThua(x,i)) / giaiThua(i); 
    }
    return total;
}


// Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
double timSBai73(double x, int n){
    double total = 0;
    for(int i=1; i<n; i++){
        if(i % 2 == 0) total += (luyThua(x,i+1))/giaiThua(2*i);
        else total += (-luyThua(x,i+1))/giaiThua(2*i);
    }
    return total;
}
 
// Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n + 1)!
double timSBai74(double x, int n){
    double total = 0;
    for(int i=0; i<=n; i++){
        total += (luyThua(-1,i+1) * luyThua(x,(2*i)+1))/(giaiThua((2*i)+1));
    }
    return (1.0 + total);
}

// Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không
bool kiemTra2muK(int n){
    // Sử dụng bit wise
    // if(n > 0 && (n & (n-1) == 0)) return true;

    if(n <=0) return false;
    while (n % 2 == 0){
        n /= 2;
    }
    if(n == 1) return true;
    return false;
}

// Bài 76: Kiểm tra số nguyên 4 byte có dạng 3^k hay không
bool kiemTra3muK(int n){
    if(n <= 0) return false;
    while(n % 3 == 0){
        n /= 3;
    }
    if(n ==1) return true;
    return false; 
}


