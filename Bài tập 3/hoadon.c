#include <stdio.h>

int main() {
  // khai bao bien dongia, soluong, thanhtien
  int dongia, soluong, thanhtien;
  // xuat nhap dongia ra man hinh
  printf("nhap dongia:");
  scanf("%d", &dongia);
  // xuat nhap soluong ra man hinh
  printf("nhap soluong:");
  scanf("%d", &soluong);
  thanhtien = dongia * soluong; 
  if (soluong >= 5 && dongia >= 500){
  printf("xuat thanhtien = %d", thanhtien * 50/100);
  // nếu soluong mua từ 5 trở lên và dongia lớn hơn hoặc bằng 500 thì sẽ giảm giá 50%
  }else{
  printf("xuat thanhtien = %d", thanhtien);
  // Ngược lại soluong nhỏ hơn 5 thì sẽ không giảm giá
  }
  return 0;
}
