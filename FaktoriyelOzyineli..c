#include<stdio.h>
int fact(int b){
	if(b==0)
	return 1;
	return b*fact(b-1);
}
int main(){
	int a;
	printf("faktoriyelini istediginiz sayiyi girin:");
	scanf("%d",&a);
	printf("%d",fact(a));
}
