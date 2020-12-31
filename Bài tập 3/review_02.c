#include <stdio.h>


int main() 
{
	//Khai bao bien a, b, i
    int a, b, i;
    //Hien thi ket qua ra man hinh
    printf("Nhap so\n");
    //Nhap so lieu tu ban phim
    scanf("%d", &a);
    //Hien thi ket qua ra man hinh
    printf("Nhap so\n");
    //Nhap so lieu tu ban phim
    scanf("%d", &b);
	//Vong lap for
for(i = a; i <= b; i++)

	//Dieu kien 1 be hon hoac bang i va i be hon hoac bang 9
if(1 <= i && i <= 9)
{
	//i be hon hoac bang 1
if(i <= 1)
{
	//Hien thi ket qua ra man hinh la one
    printf("One\n");
}	//i be hon hoac bang 2
else if(i <= 2)
{
	//Hien thi ket qua ra man hinh la Two
    printf("Two\n");
}
	//i be hon hoac bang 3 
else if(i <= 3)
{
		//Hien thi ket qua ra man hinh la Three
    printf("Three\n");
}
	//i be hon hoac bang 4 
else if(i <= 4)
{
		//Hien thi ket qua ra man hinh la Four
    printf("Four\n");
}
	//i be hon hoac bang 5 
else if(i <= 5)
{	
	//Hien thi ket qua ra man hinh la Five
    printf("Five\n");
}
	//i be hon hoac bang 6 
else if(i <= 6)
{
		//Hien thi ket qua ra man hinh la Six
    printf("Six\n");
}
	//i be hon hoac bang 7
else if(i <= 7)
{
		//Hien thi ket qua ra man hinh la Seven
    printf("Seven\n");
}
	//i be hon hoac bang8
else if(i <= 8)
{
		//Hien thi ket qua ra man hinh la Eight
	printf("Eight\n");
}
	//i be hon hoac bang 9
else{
		//Hien thi ket qua ra man hinh la Nine
    printf("Nine\n");
}
}
else
{
if(i%2==0){
     printf("even\n");
}
else
{
     printf("odd\n");
}
}


return 0;
}
