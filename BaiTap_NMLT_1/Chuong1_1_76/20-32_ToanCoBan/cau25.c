#include <stdio.h>

// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int tong = 0;
    for(i=1; i<=n;i++){
        if(n % i == 0 && i % 2 == 0){
            tong += i;
            printf("%d ",i);
        }
    }
    printf("Tổng là: %d",tong);

    return 0;
}