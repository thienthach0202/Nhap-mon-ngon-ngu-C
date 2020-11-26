#include <stdio.h>

int main(void) {
  // Khai bao bien a, b kieu int
  int a,b;
  // Khoi tao bien a = 3
  a = 3;
  // Khoi tao bien b = 5
  b = 5;
  // khai bao bien tong, hieu, tich, thuong kieu int
  int tong, hieu, tich; 
  // Thay doi bien thuong
  double thuong;
  tong = a + b;
  hieu = a - b;
  tich = a * b;
  // Thay doi bien thuong
  thuong = (double)a / b;
  // Hien thi cac bien tong, hieu, tich, thuong ra man hinh
  printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
  return 0;
}
