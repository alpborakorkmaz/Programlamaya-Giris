#include<stdio.h>
#include<math.h>
int main(){
	int a[5];
	int i;
	int j;
	float ort;
	for(i=0;i<5;i++){
	printf("sayi giriniz:");
	scanf("%d",&a[i]);
	a[i]=a[i]*a[i];
}
	ort=(a[0]+a[1]+a[2]+a[3]+a[4])/5;
	printf("\nSonuc:%.2f",sqrt(ort));
	
}
