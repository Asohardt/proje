#include <stdio.h>

//Yar��ap� verilen dairenin alan�n� ve �evresini fonksiyon kullanarak hesaplayan program.

void hesapla(){
	float yaricap;
	
	printf("Yaricapi giriniz: ");
	scanf("%f", &yaricap);
	
	printf("Cevre = %.2f", 2 * 3.14 * yaricap);
	printf("\nAlan = %.2f", 3.14 * yaricap * yaricap);
}

main()
{
	hesapla();
}
