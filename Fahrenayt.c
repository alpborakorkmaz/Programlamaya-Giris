#include<stdio.h>
int main(){
	float c,f;
	printf("Lutfen sicakligi celsius olarak giriniz:");
	scanf("%f",&c);
	f=(c*1.8000)+32;
	printf("%.2f",f);
}
