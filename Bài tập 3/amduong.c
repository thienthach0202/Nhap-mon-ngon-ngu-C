#include <stdio.h>

int main() {
  int a;
  // xuat nhap a ra man hinh
  printf("nhap a = ");
  scanf("%d", &a);
  // kiem tra a la duong hay am
  if(a > 0){
      printf("%d la so duong",a);
  //hien thi a la so duong ra man hinh    
  } else if(a == 0) {
      printf("a = 0");
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
