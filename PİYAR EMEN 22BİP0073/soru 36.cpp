#include<stdio.h>

//Kullan�c�n�n verece�i say�da ��rencinin puanlar�n� sorarak bu puanlar�n toplam�n� ve ortalamas�n� bulan program.

main(){
	float ogrenci_sayisi, puan, toplam_puan;
	
	printf("Ogrenci sayisini giriniz: ");
	scanf("%f", &ogrenci_sayisi);
	
	for(int i=1; i <= ogrenci_sayisi; i++){
		puan = 0;
		printf("%d. ogrencinin puanini giriniz: ", i);
		scanf("%f", &puan);
		toplam_puan += puan;
	}
	
	printf("Toplam puan: %.0f\n", toplam_puan);
	printf("Puan ortalamasi: %.2f", toplam_puan/ogrenci_sayisi);
}
