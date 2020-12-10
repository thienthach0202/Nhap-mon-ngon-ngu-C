#include <stdio.h>

int main() {
  int a;
  // hien thi a ra man hinh 
  printf("nhap a = ");
  // xuat nhap a ra man hinh
  scanf("%d", &a);
  // kiem tra a la duong hay am
  if(a > 0){
      printf("%d la so duong",a);
  //hien thi a la so duong ra man hinh    
  } else if(a == 0) {
      printf("%d bang khong",a);
  // hien thi a bang khong ra man hinh    
  }else if(a < 0) {
      printf("%d la so am",a);
  // hien thi a la so am ra man hinh    
  }    
  // hien thi noi dung
  printf("%d", a);

  getchar();
  return 0;
}
