#include<stdio.h>

//Say� piramidi olu�turan program.

main(){
	int satir_sayisi, sayi=1;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d", &satir_sayisi);
	
	for(int i=1; i <= satir_sayisi; i++){
		for(int a=1; a <= i; a++){
			printf("%d", a);
		}
		printf("\n");
	}
}
