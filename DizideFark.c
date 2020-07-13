#include<stdio.h>
int main(){
	int a;
	int i,j;
	int gecici;
	int dizi[50];
	printf("Dizi kac sayidan olusacak:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<a-1;i++){
		for(j=i+1;j<a;j++){
			if(dizi[i]>dizi[j]){
			gecici=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=gecici;
		}
		}
	}
	printf("Fark:%d",(dizi[a]-dizi[1]));
}
