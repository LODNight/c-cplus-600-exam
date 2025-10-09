#include <stdio.h>
#include <math.h>

// Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
// Là số có bình phương số nguyên VD: 9=3x3, 4=2x2, 16=4x4 
int main(){
    int n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int can = sqrt(n);
    if (can * can == n){
        printf("%d là số chính phương", n);
    } else {
        printf("%d không phải là số chính phương", n);
    }
    return 0;
}