#include <stdio.h>

//Kullan�c�dan iki sayi girmesini isteyen ve say�lar�n b�y�kl���n� kar��la�t�ran program.

main()
{
	int sayi1, sayi2;
	
	printf("ilk sayiyi giriniz...\n");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz...\n");
	scanf("%d", &sayi2);
	
	if(sayi1 > sayi2)
	{
		printf("%d > %d", sayi1, sayi2);
	}
	
	else
	{
		printf("%d > %d", sayi2, sayi1);
	}
}
