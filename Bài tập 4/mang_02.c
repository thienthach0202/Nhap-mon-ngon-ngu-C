#include <stdio.h>

int main () 
{
 
  int a[100];
  int n,i;
  int s = 0;
  		printf("Nhap kich thuoc mang: ");
  		scanf("%d",&n);
      printf("Nhap so phan tu: ");
 	for	(i = 0;i < n;i++)
		{
     scanf("%d", &a[i]);
		 s = s + a[i];
    }
		printf("\nTong cac so tu day tren = %d",s);
  return  0;
}
