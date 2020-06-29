#include <stdio.h>  
#include <math.h>
int main(){
	int a,b,y;
	printf("ucgenin iki dik kenarini giriniz");
	scanf("%d %d",&a,&b);
	y=sqrt((a*a)+(b*b));
	printf("ucgenin alani:%d",(a*b)/2);
	printf("\nucgenin cevresi:%d",a+b+y);
	
}
