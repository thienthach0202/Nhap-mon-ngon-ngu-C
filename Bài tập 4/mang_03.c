#include <stdio.h>

int main () {
  int n,i;
    printf("nhap n: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
      printf("nhap phan tu thu : ");
      scanf("%d", &a[i]);
    }
    printf("mang a: ");
    for(i=0;i<n;i++){
    printf("%d ", a[i]);
    }
    int tongchan = 0;
    for(int j=0;j<=n;j++){
      if(a[j]%2==0)
      tongchan=tongchan+j;
    }
    printf("\ntongchan: %d",tongchan);

    int tongle = 0;
    for(int k=1;k<=n;k++){
      if(a[k]%2!=0)
      tongle=tongle+k;
    }
    printf("\ntongle: %d",tongle);

   for(i=0;i<n;i++){
     printf(" %d",a[i]);
   }
     printf("\nso le tu mang a: ");
      for(i=0;i<n;i++){
        if(a[i]%2!=0)
        {
       printf(" %d", a[i]);
        }
      }
      int demchan = 0;
      printf("\nso chan tu mang a: ");
      for(i=0;i<n;i++){
        if(a[i]%2==0&&a[i]!=0)
        demchan = demchan +i;

      printf(" %d", a[i]);
        
      }
      printf("\nso 0 tu mang a: ");
      for(i=0;i<n;i++){
        if(a[i]==0)
      printf(" %d", a[i]);
        
      }
      
      
  return  0;
}
