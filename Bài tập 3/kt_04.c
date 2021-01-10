#include <stdio.h>

int main(){
    // Khai bao bien n, i, tong
    int n, i, tong;
    tong = 0;
    // Hien thi Nhap n ra man hinh
    printf("Nhap n: ");
    scanf("%d", &n);
      if(n < 0){
      printf("FAIL!!! Yeu cau nhap n > 0\n");
      }
      while(n>0){
        i = n % 10;
        n = n / 10;
        tong = tong + i;
    }
    printf("%d",tong);
    return 0;
}
