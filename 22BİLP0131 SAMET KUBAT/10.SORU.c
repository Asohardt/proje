#include <stdio.h>
/// Basit d�rt i�lem ve moduler aritmetik i�lem yapabilen program soru 18
int main(){
	
	float bolme;
	int sayi1,sayi2,secim,toplama,cikarma,carpma;
	
	printf("1.sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("\nToplama islemi icin 1'e basiniz.\n");
	printf("\nCikarma islemi icin 2'ye basiniz.\n");
	printf("\nCarpma islemi icin 3'e basiniz.\n");
	printf("\nBolme islemi icin 4'e basiniz.\n");
	scanf("%d",&secim);
	
	if(secim==1){
		toplama=sayi1+sayi2;
		printf("Sayilarin toplami= %d.",toplama);
	}
	else if(secim==2){
		cikarma=sayi1-sayi2;
		printf("Sayilarin farki= %d.",cikarma);
	}
	else if(secim==3){
		carpma=sayi1*sayi2;
		printf("Sayilarin carpimi= %d.",carpma);
	}
	else if(secim==4){
		bolme=sayi1/sayi2;
		printf("sayilarin bolumu= %f.",bolme);
	}
	else{
		printf("Yanlis secim yaptiniz.");
		
	}
	///kullan�c�dan 2 sayi girmesini istedik girdi�i sayiya g�re yapabilece�i i�lemleri listeledik ve 
	///verdi�i se�ime g�re if else d�ng�lerinin i�inde i�lemleri tan�mlayarak 4 i�lemi yapabilmesini sa�lad�k.
}
