#include <stdio.h>

//Ya�� girilen bir ki�inin se�imlerde oy verme yeterlili�i olup olmad���n� test eden program.

main()
{
	int yas;
	
	printf("Yasinizi giriniz...\n");
	scanf("%d", &yas);
		
	if(yas >= 18)
	{
		printf("Oy kullanabilirsiniz.");
	}
	
	else
	{
		printf("Oy kullanabilmek i�in biraz daha beklemelisiniz.");
	}
}
