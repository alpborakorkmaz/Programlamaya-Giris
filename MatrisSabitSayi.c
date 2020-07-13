#include<stdio.h>
int main(){
	int i,j;
	int dizi[3][3];
	int a;
	printf("Sabit sayiyi giriniz:");
	scanf("%d",&a);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&dizi[i][j]);
			dizi[i][j]*=a;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
}
