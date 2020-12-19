#include <stdio.h>

int main(void) {
  char pt;
  int a = 5,b = 3;
    printf("nhap phep tinh:");
    scanf("%c", &pt);
    switch(pt){
    case '+':
      printf("a + b = ");break;
    case '-':
      printf("a - b = ");break;
    default:
      printf("loi neu phep tinh sai");
    }    
  return 0;
}

