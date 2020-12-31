#include <stdio.h>
int main()

{
	//Khai bao bien
int n;
	//Hien thi ra ban hinh
	printf("Nhap vao so \n");
	//Nhap so tu ban phim
	scanf("%d",&n);
	//Nhap 1 de ra one
if (n <= 1 )
{
	//Hien thi ra man hinh
	printf("One");
}	
else if (n <= 2)
{	
	printf("Two");
}
else if (n <= 3)
{
	printf("Three");
}
else if (n <= 4)
{
	printf("Four");
}
else if (n <= 5)
{
	printf("Five");
}
else if (n <= 6)
{
	printf("Six");
}
else if (n <= 7)
{
	printf("Seven");
}
else if (n <= 8)
{
	printf("Eight");
}
else if (n <= 9)
{
	printf("Nine");
}
else if (n > 9)
{
	printf("Greater than 9");
}
return 0;
}
