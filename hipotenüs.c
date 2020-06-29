#include <stdio.h>  
#include <math.h>
int main(){
	int	x,y,hipotenus;
	printf("lutfen iki kenar uzunlugu giriniz");
	scanf("%d %d",&x,&y);
	hipotenus=sqrt((x*x)+(y*y));
	printf("hipotenus:%d",hipotenus);
	
}
