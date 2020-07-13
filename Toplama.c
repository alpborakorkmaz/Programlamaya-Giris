#include<stdio.h>
int carpma(int a,int b){
	int i;
	int sonuc=0;
	for(i=1;i<=b;i++){
		sonuc+=a;
	}
	return sonuc;
}
int main(){
	int a,b;
	printf("ilk sayi:");
	scanf("%d",&a);
	printf("ikinci sayi:");
	scanf("%d",&b);
	int sonuc=carpma(a,b);
	printf("%d",sonuc);
}
