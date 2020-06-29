#include <stdio.h>  
#include <math.h>
int main(){
	int kenar[3];
	int hipotenus=0;
	int i;
	for(i=0;i<3;i++){
	printf("lutfen ucgeninizin kenar uzunluklarini giriniz");
	scanf("%d",&kenar[i]);
	if(kenar[i]>kenar[i-1])
	hipotenus=kenar[i];
	kenar[2]=hipotenus;
}
	if(hipotenus*hipotenus==kenar[0]*kenar[0]+kenar[1]*kenar[1])
	printf("ucgeniniz dik bir ucgendir");
	else
	printf("ucgeniniz dik bir ucgen degil");
}
