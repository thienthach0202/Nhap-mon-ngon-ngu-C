#include <stdio.h>

int main(void) {
  char thang;
    printf("nhap thang:");
    scanf("%c", &thang);
    switch(thang){
      case 1:
        printf("31 ngay");
      case 2:
        printf("28 ngay");
      case 4:
        printf("30 ngay");  
    default:
      printf("nhap thang");
    }    
  return 0;
}
