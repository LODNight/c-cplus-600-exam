#include <stdio.h>

// Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int tich = 1;
    for(i=1; i<=n;i++){
        if(n % i == 0 && i % 2 != 0){
            tich *= i;
            printf("%d ",i);
        }
    }
    printf("Tổng là: %d",tich);
    

    return 0;
}