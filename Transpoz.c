#include<stdio.h>
int main(){
	int i,j;
	int dizi[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&dizi[i][j]);
	}
	}
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
}
