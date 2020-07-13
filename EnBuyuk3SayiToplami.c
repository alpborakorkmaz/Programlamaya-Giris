#include<stdio.h>
int main(){
    int dizi[6], gecici;
    for(int i=0; i<6; i++){ 
        printf("Sayi giriniz: ");
        scanf("%d", &dizi[i]);
    }
    for(int i=0; i<5;i++){ 
        for(int j=i+1; j<6; j++){
            if(dizi[i] > dizi[j]){
                gecici = dizi[i]; 
                dizi[i] = dizi[j]; 
                dizi[j] = gecici; 
            }
        }
    }
    int sonuc;
    sonuc=dizi[5]+dizi[4]+dizi[3];
    printf("%d",sonuc);
    }
