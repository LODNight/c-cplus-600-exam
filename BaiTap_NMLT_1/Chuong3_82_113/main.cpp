#include <stdio.h>
#include "chuong3.h"
#include "chuong3.cpp"

int main(){
    int n;
    double a = 20.9;
    double b = 20.7;
    double c = 12.91;
    // printf("Nhập n: ");
    // scanf("%d",&n);
    
    double result = timSoThucLonNhat(a,b,c);

    printf("%lf",result);

    return 0;
}