#include<stdio.h>

//Kullan�c� negatif bir say� girinceye kadar kullan�c�dan bir say� girmesini isteyen ve girilen say�y� ekrana yazd�ran program.

main(){
	int sayi;
	
	while(sayi >= 0){
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		
		if(sayi < 0){
			printf("Negatif sayi (%d) girdiniz.\n", sayi);
		}
		
		else if(sayi == 0){
			printf("Girdiginiz sayi: 0\n");
		}
		
		else{
			printf("Pozitif sayi (%d) girdiniz.\n", sayi);
		}
	}
}
