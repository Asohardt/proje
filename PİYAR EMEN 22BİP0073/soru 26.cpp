#include<stdio.h>

//Girilen bir say�n�n fakt�riyelini hesaplayan program.

main(){
	int sayi, faktoriyel=1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=2; sayi >= i; i++){
		faktoriyel *= i;
	}
	
	printf("%d faktoriyel = %d", sayi, faktoriyel);
}
