#include <stdio.h>
#include "timS.h"
#include "timS.c"


int main(){
    int n;
    printf("Nhập số a: ");
    scanf("%d",&n);

    printf("Bài 1: S(n) = %d\n",TimS_Bai1(n));

    return 0;
}