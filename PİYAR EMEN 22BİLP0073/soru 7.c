#include <stdio.h>

//Kullan�c�dan gidilecek mesafe ve var�� zaman�n� sorarak olmas� gereken h�z� hesaplayan program.

main()
{
	float mesafe, saat, dakika, zaman, hiz;
	
	printf("Mesafeyi km olarak giriniz...\n");
	scanf("%f", &mesafe);
	
	printf("Sureyi saat olarak giriniz...\n");
	printf("Saat: ");
	scanf("%f", &saat);
	printf("Dakika: ");
	scanf("%f", &dakika);
	
	// Dakikay� da saate �eviriyoruz.
	zaman = saat + (dakika / 60);
		
	printf("Hiziniz saatte ortalama %.2f olmali.", mesafe / zaman);
}
