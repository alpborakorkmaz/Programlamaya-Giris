#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int sayi;
	printf("Metin giriniz:");
	gets(a);
	sayi=strlen(a);
	printf("Metindeki Karekter Sayisi:%d",sayi);
}
