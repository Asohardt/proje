#include <stdio.h>

//Kullan�c�dan iki sayi girmesini isteyen ve bu iki say�n�n toplamlar�n� ekrana yazd�ran program.

main()
{
	int sayi1, sayi2, toplam;
	
	printf("ilk sayiyi giriniz...\n");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz...\n");
	scanf("%d", &sayi2);
	
	toplam = sayi1 + sayi2;
	
	printf("Toplam = %d", toplam);
}
