#include <stdio.h>

//Girilen y�l�n art�k y�l olup olmad���n� tespit eden program.

main()
{
	int yil;
	
	printf("Yil giriniz: ");
	scanf("%d", &yil);
	
	if(yil % 400 == 0) {
		printf("Girdiginiz yil, artik yildir.");
	}
	
	else {
		printf("Girdiginiz yil, artik yil degildir.");
	}
}
