#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n,m;
    printf("Nhập n: ");
    scanf("%d",&n);
    printf("Nhập m: ");
    scanf("%d",&m);

    int result = timUocChungLonNhat(n,m);
    printf("Kết quả: %d",result);

    return 0;
}