#include <stdio.h>
 
int main()
{
    // Khai bao bien a, b, c, d 
    int a, b, c, d;
    // /hien thi Nhap vao 3 so a, b, c ra man hinh
    printf("Nhap vao 3 so a, b, c: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a == 0){
    // Hien thi Phuong trinh co vo so nghiem ra man hinh
    printf("Phuong trinh co vo so nghiem!");
    }
    else if(b == 0){
    // Hien thi Phuong trinh vo nghiem ra man hinh
    printf("Phuong trinh vo nghiem!");
    }
    else if(c == 0){
    // Hien thi Phuong trinh co nghiem duy nhat la ra man hinh
    printf("Phuong trinh co nghiem duy nhat la: %d",-c/b);
    }
    d=b*b-4*a*c;
    if (d < 0){
    // Hien thi Phuong trinh vo nghiem ra man hinh
    printf("Phuong trinh vo nghiem!!!");
    }
    else if (d == 0){
    // Hien thi Phuong trinh co nghiem kep la ra man hinh
    printf("Phuong trinh co nghiem kep la: %d",-b/(2*a));
    }
    else{
    // Hien thi Phuong trinh co 2 nghiem phan biet la ra man hinh
    printf("Phuong trinh co 2 nghiem phan biet la: %d,%d",(-b+(d))/(2*a),(-b-(d))/(2*a));    
    }    
  return 0;
}
