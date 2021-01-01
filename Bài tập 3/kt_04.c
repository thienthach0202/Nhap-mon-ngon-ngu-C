#include <stdio.h>

int main(){
    // Khai bao bien n, i, tong
    int n, i, tong;
    tong = 0;
    // Hien thi Nhap n ra man hinh
    printf("Nhap n: ");
    scanf("%d",&n);
    // Vong lap 
    for(;n > 0;){
        i = n % 10;
        tong += i;
        n /= 10;
    }    
    // Hien thi ket qua ra man hinh
    printf("%d",tong);

    return 0;
}
