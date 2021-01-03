#include <stdio.h>

int main(void) {
// Khai bao bien n, i, tong 
int n, i, tong;
// tong = 1 + 2 + 3 + ... + n
tong = 0;
// Hien thi nhap so n ra man hinh
printf("nhap so n:");
scanf("%d", &n); 
  // n lon hon 0 thi chuong trinh moi thuc hien   
  if (n < 0) {
        printf("Có biến rồi! Đại Vương ơi!!");
    }else{
      // Hien thi Cac so le ra man hinh 
      printf("Cac so le: \n");
      // Vong lap for de i ra so le 
      for(i=1;i<=n;i=i+2){
        tong = tong + i;
        // Hien thi ra so le ra man hinh
        printf("%d ",i);
      }
        // n khong chia het cho 2
        if(n%2!=0){
        // Hien thi Tong cac so le ra man hinh
        printf("\nTong cac so le = %d", tong);
        }
      }
      // Hien thi Cac so chan ra man hinh
      printf("\nCac so chan: \n");
      // Vong lap for de i ra so chan
      for(i=2;i<=n;i=i+2){
        tong = tong + i;
        // Hien thi so chan ra man hinh
        printf("%d ", i);
      }
        // n chia het cho 2
        if(n%2==0){ 
      // Hien thi Tong cac so chan ra man hinh  
      printf("\nTong cac so chan = %d", tong);
        }
    // hien thi noi dung
    printf("\n\nC O M P L E T E!!!");
  return 0;
}
