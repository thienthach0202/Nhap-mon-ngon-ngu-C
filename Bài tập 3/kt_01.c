#include <stdio.h>

int main() 
{
  int a, b, c;
  a = 2; b = 3; c = 4;
  printf("\nBang 2\n");
  for(int i = 1; i < 11; i++)
  printf("\n%dx%d=%d\t",a ,i ,a * i);
   printf("\nBang 3\n");
  for(int i = 1; i < 11; i++)
  printf("\n%dx%d=%d\t",b ,i ,b * i);
   printf("\nBang 4\n");
  for(int i = 1; i < 11; i++)
  printf("\n%dx%d=%d\t",c ,i ,c * i);
  return 0;
}
