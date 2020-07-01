#include<stdio.h>
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
	fact=fact*sayi;
}
}
int main(){
	int a;
	printf("faktoriyelini istediginiz sayi:");
	scanf("%d",&a);
	printf("%d",faktoriyel(a));
}
