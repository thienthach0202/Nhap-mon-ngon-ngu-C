//khoi khai bao
#include <stdio.h>
//khoi dinh nghia ham khong tra ve nhap 
void nhap(int a[], int n)
{
    //su dung vong lap for
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
//khoi dinh nghia ham phan tu lon nhat
int phan_tu_lon_nhat(int a[], int n)
{
    //khai bao bien LN_n
    int LN_n = a[0];
    for (int i = 1; i < n; i++)
        if (LN_n < a[i])
            LN_n = a[i];
    return LN_n;
}
//khoi dinh nghia hma giaithua
int giai_thua(int n){
  //khai bao bien s
  int s = 1;
  if(n == 0)
    return 1;
//khai bao bien i 
int i;
  for(i=1;i<=n;i++)
    s = s * i;
    return s;
}
//khai bao ham main
int main()
{
    //khai bao bien n
    int n;
    //khai bao mang a[n]
    int a[n];
    //hien thi nhap n ra man hinh
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhap(a, n);
    phan_tu_lon_nhat(a, n);
    giai_thua(n);
    //hien thi noi dung
    printf("\nphan_tu_lon_nhat = %d", phan_tu_lon_nhat(a, n));
    printf("\nN! = %d", giai_thua(n));
    return 0;
}
