#include<stdio.h>
int main(){
	int i,j;
	int dizibir[3][3];
	int diziiki[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&dizibir[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&diziiki[i][j]);
			diziiki[i][j]+=dizibir[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",diziiki[i][j]);
		}
		printf("\n");
	}
}
