#include <stdio.h>
int main(){
	int i,j;
	int a,b;
	printf("lutfen carpim tablosunun buyuklugu icin iki deger giriniz:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
}
