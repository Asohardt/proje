#include <stdio.h>

int main()
{
	int kenar1, kenar2, kenar3;
	printf("1. Kenar uzunlugu girin: ");
	scanf("%d", &kenar1);
	
	printf("2. Kenar uzunlugu girin: ");
	scanf("%d", &kenar2);
	
	printf("3. Kenar uzunlugu girin: ");
	scanf("%d", &kenar3);
	
	if ((kenar1==kenar2) && (kenar2==kenar3))
	{
		printf("Esitkenar ucgen\n");
	}
	else if ((kenar1 == kenar2) || (kenar1 == kenar3) || (kenar2 == kenar3))
	{
		printf("Ikizkenar ucgen\n");
	}
	else
	{
		printf("Cesitkenar ucgen\n");
	}
	
	return 0;
}


// else if ile kenar 1 ile kenar 2 e�it  kenar 1 ve kenar 3 e�it  kenar 2 ile kenar 3 e�it ise ikizkenar ��gen oldu�unu printf ile yazd�rd�k//
// de�ilse printf ile �e�itkenar ��gen yazd�rd�k//

