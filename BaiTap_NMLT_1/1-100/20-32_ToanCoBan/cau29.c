#include <stdio.h>

// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int max = 0;
    for(i=1; i<=n;i++){
        if(n % i == 0 && i % 2 != 0 && i > max){
            max = i;
            printf("%d ",i);
        }
    }
    printf("Tổng là: %d",max);

    return 0;
}