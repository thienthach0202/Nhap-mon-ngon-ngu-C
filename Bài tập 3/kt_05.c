#include <stdio.h>

int main(void) {
// khai bao bien tong, n, i 
int n, i, tong;
// tong = 1 + 2 + 3 + ... + n
tong = 0;
// hien thi nhap so n ra man hinh
printf("nhap so n:");
scanf("%d", &n);    
// vong lap for
for(i = 1; i <= n; i++){
  tong += i;
  if (i % 2 == 0) // i chia hết cho 2
    {
        // hien thi i la so chan ra man hinh
        printf("%d la so chan \n ", i);
    }else{
        // hien thi i la so le ra man hinh
        printf("%d la so le \n ", i);
    }

}
// hien thi tong ra man hinh 
printf("\ntong =  %d ", tong);
  return 0;
}
