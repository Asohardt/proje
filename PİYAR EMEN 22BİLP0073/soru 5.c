#include <stdio.h>

//�ki kenar� girilen dikd�rtgenin karesi ve �evresini bulan program.

main()
{
	int kenar1, kenar2;
	
	printf("ilk kenar uzunlugunu giriniz...\n");
	scanf("%d", &kenar1);
	
	printf("ikinci kenar uzunlugunu giriniz...\n");
	scanf("%d", &kenar2);
		
	printf("Cevre = %d", (kenar1 + kenar2) * 2);
	printf("\nAlan = %d", kenar1 * kenar2);
}
