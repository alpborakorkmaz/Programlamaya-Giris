#include<stdio.h>
int main(){
	int i,a;
	int toplam=0;
	printf("Lutfen 1'den buyuk bir sayi giriniz:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		toplam+=i*i;
		
	}
	printf("Karelerin Toplami:%d",toplam);
}
