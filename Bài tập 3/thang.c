
#include <stdio.h>

int main(void):{ 
    //Khai bao bien 
    char pt;
    int thang;
    //hien thi ra man hinh
         printf("Nhap thang:\n");
         //Nhap so lieu tu ban phim
         scanf("%d", &thang);
         switch(thang)
	{
	    case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
	 //Hien thi ra man hinh 
         printf("   Co 31 ngay");break;
	    case 2:	
	 //Hien thi ra man hinh 
	 printf("  Co 28 ngay");break;
	    case 4:
            case 6:
            case 9:
            case 11:
         //Hien thi ra man hinh
	 printf(" Co 30 ngay");break;
	 default:
         //Hien thi ra man hinh khi nhap sai
	 printf("Vui long nhap thang");
	 }
  	 getchar();
    return 0;
}
