#include <stdio.h>
int main(){
	int a;
	printf("lutfen notunuzu giriniz");
	scanf("%d",&a);
	if(a<0||a>100)
	printf("lutfen gecerli bir not giriniz");
	else if(a>=90)
	printf("Notunuz:A",a);
	else if(a>=80)
	printf("Notunuz:B",a);
	else if(a>=70)
	printf("Notunuz:C",a);
	else if(a<70)
	printf("Notunuz:F",a);	
}
