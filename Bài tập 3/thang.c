#include <stdio.h>

int main(void) {
  int thang;
    printf("nhap thang:");
    scanf("%d", &thang);
    switch(thang){
      case 1:
        printf("30 ngay");
      case 2:
        printf("28 ngay")
    default:
      printf("nhap thang");
    }    
  return 0;
}
