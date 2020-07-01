#include <stdio.h>
int main(){
	int i,j;
	int a,b;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if((i+j)%(1+b)==0)//bu satirda b yerine a yazilabilir
			printf("1");
			else 
			printf("0");
		}
		printf("\n");
}
}
