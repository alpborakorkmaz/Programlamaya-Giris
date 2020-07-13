#include<stdio.h>
int main(){
	int i;
	int toplam=0;
	int a;
	int sayi=0;
	int dizi[50];
	printf("Lutfen dizinin kac sayidan olusacagini giriniz:");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&dizi[i]);
		if(dizi[i]%2==1){
		toplam+=dizi[i];
		sayi++;
		}
	}
	printf("%d",toplam/sayi);
}
