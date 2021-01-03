#include <stdio.h>

int main(){
    // Khai bao bien n, i, tong
    int n, i, tong;
    tong = 0;
    // Hien thi Nhap n ra man hinh
    printf("Nhap n > 0: ");
    scanf("%d", &n);
      // neu n be hon 0 thi chuong trinh khong thuc hien 
      if(n < 0){
      // Hien thi FAIL!!! Yeu cau nhap n > 0 ra man hinh
      printf("FAIL!!! Yeu cau nhap n > 0\n");
      }
      // Vong lap 
      for( ;n > 0; ){
        // tinh i 
        i = n % 10;
        // tinh tong 
        tong += i;
        // tinh n
        n = n / 10;
        
    // Hien thi noi dung
    printf("Tong cua cac chu so nguyen = %d ",tong);
    }
    return 0;
}
