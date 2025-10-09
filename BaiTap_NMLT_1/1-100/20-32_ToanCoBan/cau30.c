#include <stdio.h>

// Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
// Là số có tổng ước số bằng chính nó
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    int tong = 0;
    for(i=1; i<n;i++){
        if(n % i == 0){
            tong += i;
        }
    }
    printf("Tổng là: %d \n",tong);
    if(tong == n){
        printf("%d là số hoàn thiện vì tổng = %d",n,tong);
    } else {
        printf("%d không phải số hoàn thiện", n);
    }

    return 0;
}