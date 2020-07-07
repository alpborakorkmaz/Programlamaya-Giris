#include<stdio.h>
int main(){	
	int saat,dakika;
	int fark=0;
	int i;	
	int b;
	printf("Lutfen saati giriniz:");
	scanf("%d",&saat);
	printf("Lutfen dakikayi giriniz:");
	scanf("%d",&dakika);
	printf("Farki giriniz:");
	scanf("%d",&fark);
	for(i=0;i<1000;i++){
	fark=fark-60;
	if(fark<60)
	break;
	b++;
	}
	saat=saat+b;
	dakika=fark+dakika;
	saat=saat%24;
	printf("saat:%d  dakika:%d",saat,dakika);	
}
