#include<stdio.h>
int main(){
	int i;
	int buyuksayi,kucuksayi;
	int gecici;
	int sayi=0;
	int toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&buyuksayi);
	printf("Bir sayi giriniz:");
	scanf("%d",&kucuksayi);
	if(kucuksayi>buyuksayi){
		gecici=kucuksayi;
		kucuksayi=buyuksayi;
		buyuksayi=gecici;
	}
	for(i=kucuksayi;i<=buyuksayi;i++){
		if(i%2==1){
		printf("Dongudeki Tek Sayilar:%d\n",i);
		toplam+=i;
		sayi++;
	}
	}
	printf("Tek sayilarin ortalamasi:%d",toplam/sayi);
}
