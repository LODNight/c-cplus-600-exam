#include <stdio.h>

// Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1) có n dấu căn
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

  
    printf("Tổng %d là: %d",n);
   
    return 0;
}