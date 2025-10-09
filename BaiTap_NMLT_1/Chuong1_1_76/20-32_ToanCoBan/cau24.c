#include <stdio.h>

// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int dem = 0;
    for(i=1;i<=n;i++){
        if(n % i == 0 && i % 2 != 0){
            dem++;
            printf("%d ",i);
        }
    }
    printf("Số lượng ước là: %d",dem);

    return 0;
}