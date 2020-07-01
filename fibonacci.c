#include <stdio.h>
int main(){
	int a,gecici,i;
	int ilksayi=1;
    int	ikincisayi=1;
	printf("lütfen bir sayi giriniz:");
	scanf("%d",&a);
	printf("%d\n%d \n",ilksayi,ikincisayi);
	for(i=0;i<=a;i++){
		gecici=ikincisayi;
		ikincisayi+=ilksayi;
		ilksayi=gecici;
		printf("%d\n",ikincisayi);
	}
}
