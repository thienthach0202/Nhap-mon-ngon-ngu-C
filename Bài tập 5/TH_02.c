#include <stdio.h>

int main(void) {
// khai bao bien s, n
int s, n;
// s = 1 + 2 + 3 + ... + n
s = 0;
// hien thi nhap so n ra man hinh
printf("nhap so n:");
scanf("%d", &n);    
// vong lap for
for(int i = 1;i <= n;i++){
  //tinh s
  s = s + i;
}
// hien thi noi dung 
printf("tong: %d", s);
  return 0;
}
