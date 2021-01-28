//Khoi khai bao
#include<stdio.h>
int n;
void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);

//khoi ham main
int main(){
//int n;
printf("Nhap n = ");
scanf("%d", &n);
int a[n];
Nhap_pt_mang(a);
Hien_thi_pt_mang(a);
Hien_thi_tong_chan(a);
Dem_chan_le_0(a);
return 0;
}
//khoi dinh nghia ham 
void Nhap_pt_mang(int a[]){
    for(int i=0;i<n;i++){
      printf("Nhap_pt_mang(a): ");
      scanf("%d", &a[i]);
}
void Hien_thi_pt_mang(int a[]){
  printf("Hien_thi_pt_mang(a): ");
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
  }
    
}
void Hien_thi_tong_chan(int a[]){
  int tongchan = 0;
    for(int j=0;j<=n;j++){
      if(a[j]%2==0)
      tongchan=tongchan+j;
    }
    printf("\ntongchan: %d",tongchan);

}
void Dem_chan_le_0(int a[]){
  int demchan = 0, demle = 0, dem0 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            demchan++;
        if(a[i] % 2 == 1)
            demle++;
        if(a[i] == 0)
            dem0++;
    }
    printf("\nCo %d so chan, %d so le va %d so 0", demchan, demle, dem0);
}
