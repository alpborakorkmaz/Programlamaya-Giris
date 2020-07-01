include<stdio.h>
int fact(int x){
	if(x==0||x==1)
	return 1;;
	return x*fact(x-1);
}
int  main(){
	int sayi1;
	int sayi2;
	int sonuc=0;
	printf("kombinasyonunu istediginiz sayilari giriniz");
	printf("\nilk sayi: ");
	scanf("%d",&sayi1);
	printf("ikinci sayi: ");
	scanf("%d",&sayi2);
	sonuc=fact(sayi1)/(fact(sayi2)*fact(sayi1-sayi2));
	printf("\nSonuc:%d",sonuc);
}
