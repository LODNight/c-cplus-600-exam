#include <stdio.h>
#include <math.h>

// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n. 
// Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k

int kiemTraSoKLonNhat(int n){
    int k = 1;
    int total = 0;
    for(int i = 1; i < n; i++){
        total += i;
        if(total < n){
            k = i;
        }
    }
    return k;
}

// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
int demSoLuongChuSo(int n){
    int count = 0;
    while (n > 0){
        count += 1;
        n /= 10;
    }   
    return count;
}

// Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
int tongCacChuSo(int n){
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n = n / 10;
    }
    return sum;
}

//Bài 45: Hãy tính tích các chữ số của số nguyên dương n
int tichCacChuSo(int n){
    int total = 1;
    if(n<=0){
        printf("Số ko đc bé hơn 0");
        return 1;
    }
    while(n>0){
        int k = n % 10;
        total = total * k;
        n /= 10;
    }
    return total;
}

// Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int demSoLuongChuSoLe(int n){
    if(n<=0){
        printf("Số cần lớn hơn 0");
        return 1;
    }
    int count = 0;
    while(n > 0){
        int k = n % 10;
        if(k % 2 == 1) count++;
        n /= 10;
    }
    return count;
}

// Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
int tongCacSoChan(int n){
    if(n <= 0 ){
        printf("Số n cần lớn hơn 0");
        return 1;
    }
    int total = 0;
    while(n>0){
        int k = n % 10;
        if(k % 2 == 0){
            total += k;
        }
        n/=10;
    }
    return total;
}

// Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
int tongCacSoLe(int n){
    if(n<=0) return 1;

    int total = 1;
    while(n>0){
        int k = n % 10;
        if(k % 2 == 1){
            total *= k;
        }
        n /= 10;
    }
    return total;
}

// Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
int timChuSoDauTien(int n){
    if(n<=0) return 1;
    int k = 0;
    while(n>0){
        k = n % 10;
        n/= 10;
    }
    return k;
}

// Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
int daoNguocSo(int n){
    if(n <= 0) return n;

    int m = 0;
    while(n > 0){
        int d = n % 10;
        m = m * 10 + d;
        n = n / 10;
    }
    return m;
}

// Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
int soLonNhat(int n){
    if(n<=0) return 1;

    int max = 0;
    int k = 0;
    while(n>0){
        k = n % 10;
        if(max <= k){
            max = k;
        }
        n/= 10;
    }
    return max;
}

// Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
int soNhoNhat(int n){
    if(n<=0) return 1;
    int k = 0;
    int min = n;
    while(n>0){
        k = n % 10;
        if(min >= k){
            min = k;
        }
        n/= 10;
    }
    return min;
}

// Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
int demSoLuongChuSoLonNhat(int n){
    int i = n;
    int k;
    int max = soLonNhat(n);
    int count = 0;

    while(i > 0){
        k = i % 10;
        if(max == k){
            count++;
        }
        i /= 10;
    }
    return max;
}

// Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
int demSoLuongChuSoNhoNhat(int n){
    int min = n;
    int n1 = n;
    int count = 0;
    while(n1>0){
        int d = n1 % 10;
        if(min == d){
            count++;
        } 
        n1 /= 10;
    }
    return count;
}

// Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
int checkSoLe(int n){
    int d = 0;
    while(n>0){
        d = n % 10;
        if(d % 2 == 0){
            return 1;
        }
        n/=10;
    }
    return 0;
}

// Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
int checkSoChan(int n){
    int d = 0;
    while(n >= 0){
        d = n % 10;
        if(d % 2 != 0){
            return 1;
        }
        n /= 10;
    }
    return 0;
}

// Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
int kiemTraSoDoiXung(int n){
    int m = daoNguocSo(n);
    if(m == n){
        return 0;
    }
    return 1;
}


// Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
int kiemTraSoTangDan(int n){
    int max = 10;
    int d = 0;
    while(n > 0){
        d = n % 10;
        if(d > max){
            return 1;
        }
        max = d;
        n /= 10;
    }
    return 0;
}

// Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
int kiemTraSoGiamDan(int n){
    int min = 0;
    int d = 0;
    while(n > 0){
        d = n % 10;
        if(d < min){
            return 1;
        }
        min = d;
        n /= 10;
    }

}

