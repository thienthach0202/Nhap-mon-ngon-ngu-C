#include <stdio.h>

int main(void) {
// khai bao bien tong, n, dem 
int tong, n, dem;
// tong = 1 + 2 + 3 + ... + n
tong = 0;
// hien thi nhap so n ra man hinh
printf("nhap so n:");
scanf("%d", &n);    
// vong lap for
for(dem = 1; dem <= n; dem = dem + 1){
  tong += dem;
}
// hien thi tongla ra man hinh 
printf("tongla :%d", tong);
  return 0;
}
