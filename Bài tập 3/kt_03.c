#include <stdio.h>

int main(){
  // Khai bao bien i
  int i;
  // Hien thi Cac so le tu 1 den 20 tru 5, 11, 15 la ra man hinh
  printf("Cac so le tu 1 den 20 tru 5, 11, 15 la : \n");
  // Vong lap 
  for(i = 1; i <= 20; i = i + 2){
  // Kiem tra ngoai tru so 5, 11, 15
  if((i != 5) && (i != 11) && (i != 15)){
  // Hien thi cac so le ra man hinh
  printf("%5d", i);
 }
}
// Hien thi noi dung
printf("\n\nM Ề   T A   N Ì   X A   N À   Ê  Ề  Ế  Ề  Ế  Ê");
return 0;
}
