#include <stdio.h>

int main(void) {
  // Khai bao bien a, b, c
  int a, b, c;
  // Hien thi Nhap 3 so nguyen ra man hinh
  printf("Nhap 3 so nguyen : ");
  scanf("%d%d%d", &a, &b, &c);
  // Nếu a lớn hơn 0 and b lớn hơn 0 and c lớn hơn 0 thì điều kiện thoả mãn
  if(a > 0 && b > 0 && c > 0){
    // Điều kiện để tạo thành một tam giác
    if(a < b + c && b < a + c && c < a + b){
      // Hien thi Ba so tao thanh mot tam giac ra man hinh
      printf("Ba so tao thanh mot tam giac\n");

    }else{
      // Hien thi Ba so khong tao thanh mot tam giac ra man hinh
      printf("Ba so khong tao thanh mot tam giac\n");
    }
    
  }else{
    // Hien thi Yeu cau nhap 3 so duong ra man hinh
    printf("Yeu cau nhap 3 so duong!!!\n");
  }
  // Hien thi noi dung
  printf("\n\n\nH Í    A N H    E M");
  return 0;
}
