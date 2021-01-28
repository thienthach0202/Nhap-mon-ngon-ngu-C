//khoi khai bao 
#include <stdio.h>
//khai bao ham 
int so_lon_nhat(int a, int b, int c);
//khai bao ham main
int main(void) {
  //khai bao bien a,b,c
  int a,b,c;
  printf("nhap a: ");
  scanf("%d", &a);
  printf("nhap b: ");
  scanf("%d", &b);
  printf("nhap c: ");
  scanf("%d", &c);
  so_lon_nhat(a,b,c);
  printf("so lon nhat trong 3 so : %d", so_lon_nhat(a, b, c));
  return 0;
}
//khoi dinh nghia ham 
int so_lon_nhat(int a, int b, int c){
  //khai bao bien so lon nhat 
  int so_lon_nhat = 0;
  if (a > b && a > c) {
    so_lon_nhat = a;
  }else if (a < b && b < c){
    so_lon_nhat = c;
  }else{
    so_lon_nhat = b;
  }
  return so_lon_nhat;
}
