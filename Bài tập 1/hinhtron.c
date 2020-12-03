#include <stdio.h>

int main(void) {
  // Khai bao bien DT, CV, R kieu double
  double DT, CV, R;
  // Khai bao hang PI kieu double 
  double PI= 3.14;
  // Khoi tao bien R = 1.5
  R = 1.5;
  // Tinh chu vi hinh tron CV = 2 * R * PI
  CV = 2 * R * PI;
  // Tinh dien tich hinh tron DT = R * R * PI
  DT = R * R * PI;
  printf("CV: %0.1f", CV);
  printf("DT: %0.1f", DT);
  return 0;
}
