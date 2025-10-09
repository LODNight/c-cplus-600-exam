#include <stdio.h>

void timNgayKeTiep(int d, int m, int y);
int timNamNhuan(int y);
int timSoNgayTrongThang(int m, int y);

int timSoNgayTrongThang(int m, int y){
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        return 31;
    } 
    if (m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    } else {
        return timNamNhuan(y);
    }
}

int timNamNhuan(int y){
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
        return 29;
    } else {
        return 28;
    }
}

void timNgayKeTiep(int d, int m, int y){
    int max_d = timSoNgayTrongThang(m,y); 
    if(d < max_d){
        d++;
    } 
    if(d > max_d){
        d= 1;
        m++;
    }
    if(m > 12){
        y++;
        m = 1;
    }
    printf("%d/%d/%d",d,m,y);
}

int main(){
    timNgayKeTiep(33,2,2020);
    return 0;
}