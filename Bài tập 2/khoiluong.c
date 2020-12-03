#include <stdio.h>
int main(void)
{
  // Khai bao bien m(kg), g kieu int
	int m, g;
	//Hien thi nhap khoi luong m ra man hinh
	printf("Nhap khoi luong m : ");
	//Xuat nhap khoi luong m man hinh 
	scanf("%d", &m);
        printf("kg = %dg\n", m * 1000);
	//Hien thi nhap khoi luong g ra man hinh
	printf("Nhap khoi luong g : ");
	//Xuat nhap khoi luong g ra man hinh
	scanf("%d", &g);
        printf("g = %dkg\n", g / 1000);
	//Hien thi tieu de Kg và gia tri
	printf("tieu de Kg\t    tieu de G\n");
        printf(" %d", m);
        printf("           =  %d", g);
    return 0;
}
