#include <stdio.h>

// Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);
    
    int dem = 0;
    for(i=1; i<=n;i++){
        if(n % i == 0 && i % 2 == 0){
            dem += 1;
            printf("%d ",i);
        }
    }
    printf("Tổng là: %d",dem);
    

    return 0;
}