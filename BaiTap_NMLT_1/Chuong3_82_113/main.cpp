#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n;
    double a = 0;
    double b = 20.7;
    // printf("Nhập n: ");
    // scanf("%d",&n);
    
    bool result = kiemTraDau(a, b);
    if(result) printf("Cùng dấu");
    else printf("Trái dấu");

    return 0;
}