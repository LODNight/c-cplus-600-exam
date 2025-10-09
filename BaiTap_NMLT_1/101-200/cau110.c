// Bài 110: Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng. 
// Lập chương trình để tìm ra tất cả các phương án có thể

#include <stdio.h>

void DoiTien(int n);

int main(){
    int n;
    
    printf("Nhập số n: ");
    scanf("%d",&n);
    
    DoiTien(n);
    return 0;
}

void Doitien(int n){
    // x * 1000 + y * 2000 + 5000 * z = n
    for(int soto5000 = 0; soto5000 * 5000 <= n; soto5000++){
        for(int soTo2000 = 0; soTo2000 * 2000 + soto5000 * 5000 <=n; soTo2000++){
            int soTienConLai = n - (soTo2000 * 2000 + soto5000 * 5000);
            if(soTienConLai % 1000 == 0){
                int soto1000 = soTienConLai / 1000;
                printf("%5d to 5000 + %5d to 2000 + %5d to 1000\n",soto5000,soTo2000,soto1000);
            }
        }
    }

}