#include <stdio.h>

// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int tong = 0;
    for(i=1; i<=n;i++){
        if(n % i == 0 && i < n){
            tong += i;
            printf("%d ",i);
        }
    }
    printf("Tổng là: %d",tong);

    return 0;
}