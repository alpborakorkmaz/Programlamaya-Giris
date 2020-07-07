#include<stdio.h>
int main(){
	int saat;
	printf("Lutfen bir ay boyunca calistiginiz mesai suresini girin:");
	scanf("%d",&saat);
	if(saat<=10)
	printf("Mesai Ucreti:%d",saat*1);
	else if(20>=saat)
	printf("Mesai Ucreti:%d",saat*2);
	else if(40>=saat)
	printf("Mesai Ucreti:%d",saat*3);
	else if(100>=saat)
	printf("Mesai Ucreti:%d",saat*4);
	else if(saat>100)
	printf("Mesai Ucreti:%d",saat*5);
	else if(saat<0)
	printf("gecerli mesai suresi giriniz");
}
