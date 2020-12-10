#include <stdio.h>

int main() {
  int n;
  // hien thi n ra man hinh 
  printf("nhap n = ");
  // xuat nhap n ra man hinh
  scanf("%d", &n);
  // kiem tra n la chan, le, 0
  if(n % 2 == 0){
      printf("%d la so chan\n",n);
  //hien thi n la so chan ra man hinh    
  } else if(n == 0) {
      printf("n = 0");
  // hien thi n la 0 ra man hinh    
  }else if(n % 2 != 0) {
      printf("%d la so le\n",n);
  // hien thi n la so le ra man hinh    
  }    
  // hien thi noi dung
  getchar();
  return 0;
}
