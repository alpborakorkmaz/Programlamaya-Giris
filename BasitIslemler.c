#include<stdio.h>
int main(){
	int x,y;
	printf("lutfen iki adet tam sayi giriniz:");
	scanf("%d %d",&x,&y);
	printf("Toplamlari:%d\nFarklari:%d\nCarpimlari:%d\nBolumleri:%.1f\nKalan:%d",(x+y),(x-y),(x*y),(float)x/y,(x%y));
	
}
