#include <stdio.h>

int main(void) {
  // Hien thi CHUONG TRINH IN BANG CUU CHUONG ra man hinh
  printf("--------CHUONG TRINH IN BANG CUU CHUONG--------");
  // Khai bao bien a, b
  int a, b;
  // Vong lap 
  for(a = 2; a <= 10; a++){
  // Hien thi X ra man hinh
  printf("\n--------X%d--------\n", a);
  // Vong lap
  for(b = 1; b < 10; b++){
  // Hien thi ket qua bang cuu chuong ra man hinh
  printf("\t%d x %d = %d\n", a, b, a*b);
  }
  }
  printf("\n\n E N D       G A M E ");
  return 0;
}
