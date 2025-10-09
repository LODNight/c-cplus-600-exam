#include <stdio.h>
#include <stdbool.h>

// Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
// Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
// Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1) có n dấu căn


bool KiemTraSoNguyenTo(int n){
    
    for(int i=2;i<n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);
    int isprime = 1;

    for(i=2;i<n;i++){
        if(n % i == 0){
            isprime = 0;
        }
    }

    if(isprime == 0){
        printf("%d không phải số nguyên tố",n);
    } else {
        printf("%d là số nguyên tố",n);
    }
   
    return 0;
}