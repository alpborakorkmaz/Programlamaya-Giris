#include<stdio.h>
int main(){
	int i;
	int a,b;
	int kucuksayi;
	int obeb=1;
	printf("2 sayi giriniz:");
	scanf("%d %d",&a,&b);
	if(a<b)
	kucuksayi=a;
	else
	kucuksayi=b;
	for(i=2;i<=kucuksayi;i++){
		if(a%i==0&&b%i==0)
		obeb=i;
	}
	printf("okek:%d",((a*b)/obeb));
}
