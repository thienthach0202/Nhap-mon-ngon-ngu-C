//Khoi khai bao
#include<stdio.h>
void Nhap_pt_mang();
void Hien_thi_pt_mang();
void Hien_thi_tong_chan();
void Dem_chan_le_0();

//khoi ham main
int main(){
int n;
printf("Nhap n = ");
scanf("%d", &n);
int a[n];
Nhap_pt_mang(a);
Hien_thi_pt_mang(a);
Hien_thi_tong_chan(a);
Dem_chan_le_0(a);
return 0;
}
void Nhap_pt_mang(int n, int i){
  int a[n];
    for(i=0;i<n;i++){
      printf("Nhap_pt_mang(a): ");
      scanf("%d", &a[i]);
}
void Hien_thi_pt_mang(){
  printf("Hien_thi_pt_mang(a): ");
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
    }
}
void Hien_thi_tong_chan(){
  int tongchan = 0;
    for(int j=0;j<=n;j++){
      if(a[j]%2==0)
      tongchan=tongchan+j;
    }
    printf("\ntongchan: %d",tongchan);

}
void Dem_chan_le_0(){
  
}

// khoi dinh nghia ham
