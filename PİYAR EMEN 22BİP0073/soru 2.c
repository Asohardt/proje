#include <stdio.h>

//Bir say� girilmesini isteyen ve girilen say�y� ekrana yazan program.

main()
{
	int sayi;
	
	printf("Bir sayi giriniz...\n");
	scanf("%d", &sayi);
	
	printf("Girilen sayi = %d", sayi);
}
