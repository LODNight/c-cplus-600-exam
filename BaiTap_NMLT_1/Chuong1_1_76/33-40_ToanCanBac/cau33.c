#include <stdio.h>
#include <math.h>

// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
int main(){
    int i,n;
    printf("Nhập số n: ");
    scanf("%d",&n);

    float cb2 = n;
    for(i=1; i<=n; i++){
        cb2 = sqrt(2+sqrt(2));
    }
    
    printf("Căn bậc 2 của %d là: %.2f ",n,cb2);
   
    return 0;
}