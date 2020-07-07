include<stdio.h>
int main(){	
	float a,b,c;
	float sonuc;
	printf("ilk musluk havuzu tek basina kac saatte dolduruyor:");
	scanf("%f",&a);
	printf("ikinci musluk havuzu tek basina kac saatte dolduruyor:");
	scanf("%f",&b);
	printf("ucuncu musluk havuzu tek basina kac saatte dolduruyor:");
	scanf("%f",&c);
	sonuc=(1/a)+(1/b)+(1/c);
	printf("3 musluk beraber havuzu %.2f saatte doldurur",1/sonuc);
}
