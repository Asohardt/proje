#include<stdio.h>
#include <string.h>

//Ayr� ayr� girilen ad� ve soyad� bilgilerini birle�tirerek tam ad�n� g�steren program.

main(){
	char ad[10], soyad[10];
	
	printf("Adinizi giriniz: ");
	gets(ad);
	strcat(ad, " ");
	
	printf("Soyadinizi giriniz: ");
	gets(soyad);
	
	printf("Adiniz Soyadiniz: %s", strcat(ad, soyad));
}
