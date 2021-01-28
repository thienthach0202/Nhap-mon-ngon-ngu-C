#include <stdio.h>
 
int main()
{
    // Khai bao bien a, b, c, delta, x, x1, x2
    int a, b, c, delta, x, x1, x2;
    printf("Giai phuong trinh bac 2: ax2 + bx + c = 0\n");
    // /hien thi Nhap a, b, c ra man hinh
    printf("Nhap a : ");
    scanf("%d",&a);
    printf("Nhap b : ");
    scanf("%d",&b);
    printf("Nhap c : ");
    scanf("%d",&c);
    // neu a = 0 thi ptrinh co dang bx+c=0 -> chinh la giai PT bac 1
    if(a == 0){
        // neu b bang 0 thi phuong trinh vo nghiem 
        if(b == 0){
            // neu c bang 0 thi phuong trinh co vo nghiem 
            if(c == 0)
        // hien thi Phuong trinh co vo so nghiem ra man hinh
        printf("Phuong trinh co vo so nghiem!");
            else
        // Hien thi Phuong trinh vo nghiem ra man hinh
        printf("Phuong trinh vo nghiem!");
      }else{
        // Hien thi Phuong trinh co nghiem x ra man hinh
        printf("Phuong trinh co nghiem la %d", -c / b);
      }
   }else{
        // Khi a khac 0 , thuc hien tinh delta theo 3 truong hop 
        // Cong thuc tinh delta khi delta be hon 0
        delta = b*b - 4*a*c;
        // Cong thuc tinh delta khi delta bang 0
        x = -b/(2*a);
    // TH1: neu delta be hon 0 thi phuong trinh vo nghiem
    if(delta < 0)
        // hien thi Phuong trinh vo nghiem ra man hinh
        printf("Phuong trinh vo nghiem!");
    // TH2: neu delta bang 0 thi phuong trinh co 1 nghiem kep 
    else if(delta == 0)
        // Hien thi Phuong trinh co nghiem kep la ra man hinh
        printf("Phuong trinh co 1 nghiem kep la: %d", x);
    // TH3: neu delta lon hon 0 thi phuong trinh co 2 nghiem phan biet
    // delta > 0
    else {
        // Cong thuc tinh delta khi delta lon hon 0 
        x1 = (-b+(delta))/(2*a);
        x2 = (-b-(delta))/(2*a);
        // Hien thi Phuong trinh co 2 nghiem phan biet la ra man hinh
        printf("Phuong trinh co 2 nghiem phan biet x1 = %d, x2 = %d",x1, x2); 
    }     
   } 
  return 0;
}
