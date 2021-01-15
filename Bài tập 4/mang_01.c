#include <stdio.h>

int main()
{	
  //Khai bao bien kem khoi tao mang
	int a[4] = {3, 5, 7, 2};
  //khai bao bien i, s
	int i, s;
  s = 0;
  //khai bao bien n = 4
	int n = 4;
	{
  //Vong lap chay ra so 3, 5, 7, 2
		for ( i = 0; i < n; i++)
		{
      //Hien thi ra man hinh 3, 5, 7, 2
			printf("%d ", a[i]);
		}
	}

	for ( i = 0; i < n; i++)
	{
		s = s + a[i];
	}
		printf("\nTong cac so tu day tren = %d", s);
return 0;
}
