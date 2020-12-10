#include <stdio.h>

int main() {
  // khai bao bien dongia, soluong, thanhtien
  int dongia, soluong, thanhtien;
  // xuat nhap dongia ra man hinh
  printf("nhap dongia duoc mua la:");
  scanf("%d", &dongia);
  // xuat nhap soluong ra man hinh
  printf("nhap soluong duoc mua la:");
  scanf("%d", &soluong);
  thanhtien = dongia * soluong; 
  // hien thi thanhtien ra man hinh
  printf("xuat thanhtien = %d\n", thanhtien);
  return 0;
}
