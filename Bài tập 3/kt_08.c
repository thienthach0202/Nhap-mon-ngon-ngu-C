#include <stdio.h>

int main(void) {
  // Khai bao bien a, b
  float a, b;
  // Hien thi nhap a ra man hinh
  printf("nhap a = ");
  scanf("%f", &a);
  // Hien thi nhap b ra man hinh
  printf("nhap b = ");
  scanf("%f", &b);
  // Neu a lon hon 0 va b lon hon 0 hoac a be hon 0 va b lon hon 0 thi a va b cung dau 
  if((a > 0 && b > 0 ) || (a < 0 && b < 0)){
    // Hien thi a cung dau b ra man hinh
    printf("\n%f va %f la 2 so cung dau", a, b);
   // Neu a lon hon 0 va b be hon 0 hoac a be hon 0 va b lon hon 0 thi a va b khac dau
  }else if((a > 0 && b < 0) || (a < 0 && b > 0))
    // Hien thi a khac dau b ra man hinh
    printf("\n%f va %f la 2 so khac dau", a, b);
  // hien thi noi dung
  printf("\n====!!!Chuc ban may man!!!====");
  return 0;
}
