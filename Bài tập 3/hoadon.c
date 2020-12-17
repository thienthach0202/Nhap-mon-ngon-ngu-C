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
  if (soluong >= 5){
  printf("xuat thanhtien = %d\n", thanhtien *75/100);
  // Nếu số lượng mua từ 5 trở lên thì sẽ giảm giá 25%
}else{
  printf("xuat thanhtien = %d\n", thanhtien);
  // Ngược lại số lượng mua bé hơn 5 thì sẽ không giảm giá
}
  return 0;
}
