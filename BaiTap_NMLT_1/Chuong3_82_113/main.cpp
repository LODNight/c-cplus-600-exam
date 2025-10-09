#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n);
    
    int result = kiemTraQuy(n);
    printf("%d là quý %d",n,result);

    return 0;
}