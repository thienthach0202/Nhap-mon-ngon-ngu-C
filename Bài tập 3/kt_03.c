#include <stdio.h>

int main(){
  // Khai bao bien
  int i;
  // Vong lap 
  for(i = 1; i < 20; i = i + 2){
  // Kiem tra ngoai tru so 5, 11, 15
  if((i == 5) - (i == 11) - (i == 15))continue;{
  // Hien thi cac so le ra man hinh
  printf("%5d", i);

 }

}
  getchar();
return 0;
}
