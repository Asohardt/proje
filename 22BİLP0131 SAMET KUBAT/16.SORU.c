#include <stdio.h>


int main(){
	
    int k1, k2, alan, cevre;

    printf("Kisa Kenar giriniz: ");
    scanf("%d",& k1);
    
    printf("Uzun Kenar giriniz: ");
    scanf("%d",& k2);
   
    alan = k1*k2;
    cevre = 2*(k1+k2);
    
    printf("Dikdortgenin Cevresi : %d", cevre);
    printf("Dikdortgenin Alani : %d", alan);
    
    return 0;
}

//  k�sa ve uzun kenar�n girilmesini istedik ard�ndan onlar� okuduk//
// alan�n ve cevrenin nas�l bulanaca��n� yazd�k//
// cevreyi ve alan� printf ile ekrana yazd�rd�k//
