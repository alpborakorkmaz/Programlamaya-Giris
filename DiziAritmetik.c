#include<stdio.h>
int main(){
	int dizi[50];
	int toplam=0;
	int i,j;
	int a;
	printf("Dizi kac sayidan olusacak:");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("Lutfen bir sonraki sayiyi giriniz:");
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	printf("%d",toplam/a);
}
