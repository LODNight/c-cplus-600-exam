// Chương 2:
// Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n
// Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
// Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n

#include <stdio.h>
int tongN(int n);
void uocSo(int n);
int demSLchu(int n);

int main(){
    int n;
    printf("Nhập n:");
    scanf("%d",&n);
    printf("%d",demSLchu(n));

    return 0;
}

int tongN(int n){
    int total = 0;
    for(int i=0; i<=n; i++){
        total += i;
    }
    return total;
}

void uocSo(int n){
    if(n <= 0) return;
    for(int i=1; i<=n/2; i++){
        if(n % i == 0) printf("%d ",i);
    }
    printf("%d",n);
}

int demSLchu(int n){
    int count = 0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;
}