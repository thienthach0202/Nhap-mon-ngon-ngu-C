#include <stdio.h>
//khai bao ham sum
int sum(int a, int b, int c);

int main(void) {
  int x,y,z;
  printf("nhap x: ");scanf("%d", &x);
  printf("nhap y: ");scanf("%d", &y);
  printf("nhap z: ");scanf("%d", &z);
  printf("x + y + z = %d", sum(x,y,z));//khoi ham sum 
  return 0;
}
int sum(int a, int b, int c){//dinh nghia ham sum
  return a + b + c;
}


#include <stdio.h>
//khai bao ham sum
void sum();
int main(void) {
  sum();
  return 0;
}
void sum(){
  int x;
  int tong = 0;
  for(int i=1;i<=3;i++){
    tong = tong + i;
  printf("nhap so nguyen thu %d: ",i);
  scanf("%d",&x);
  } 
  printf("\n");
  printf("x + y + z = %d",tong);//khoi ham sum
}
