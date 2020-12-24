#include <stdio.h>

int main(void) {
// khai bao bien a  
int tong;
// tong = 1 + 2 + 3 + ... + 10
tong = 0;    
// vong lap for
int dem;
for(dem = 1; dem <= 10; dem = dem + 1){
  tong += dem;
}
// hien thi tongla ra man hinh
printf("tongla :%d", tong);
  return 0;
}
